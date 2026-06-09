#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
} node_t;

node_t *from_arr(int arr[], int n);
void list_print(node_t *head);
int count_elements(node_t *head);
node_t *find(node_t *head, int item);
node_t *add_to_tail(node_t *head, int value);
node_t *add_to_head(node_t *head, int value);
node_t *remove_first(node_t *head, int item_to_delete);
node_t *remove_last(node_t *head, int item_to_delete);
node_t *remove_all(node_t *head, int item_to_delete);

int main() {
  int arr[] = {1, 3, 2, 3, 2, 4, 3, 2, 5};
  node_t *head = from_arr(arr, 7);
  list_print(head);

  int count = count_elements(head);
  printf("Count: %d\n", count);

  add_to_tail(head, 8);
  printf("Add to tail 8: ");
  list_print(head);

  head = add_to_head(head, 0);
  printf("Add to head 0: ");
  list_print(head);

  node_t *five = find(head, 5);
  if (five != NULL) {
    printf("Found 5!\n");
  } else {
    printf("Failed to find 5!\n");
  }

  printf("Remove first 3: ");
  head = remove_first(head, 3);
  list_print(head);

  printf("Remove all 2: ");
  head = remove_all(head, 2);
  list_print(head);

  printf("Remove last 3: ");
  head = remove_last(head, 3);
  list_print(head);

  return 0;
}

node_t *node_create(int val, node_t *next) {
  node_t *node = malloc(sizeof(node_t));
  node->value = val;
  node->next = next;
  return node;
}

void list_print(node_t *head) {
  if (head == NULL)
    return;

  printf("%d", head->value);
  head = head->next;

  while (head != NULL) {
    printf(" -> %d", head->value);
    head = head->next;
  }
  printf("\n");
}

node_t *from_arr(int arr[], int n) {
  node_t root = {};
  node_t *current = &root;

  for (int i = 0; i < n; i++) {
    current->next = node_create(arr[i], NULL);
    current = current->next;
  }

  return root.next;
}

int count_elements(node_t *head) {
  int n = 0;

  while (head != NULL) {
    head = head->next;
    n++;
  }

  return n;
}

node_t *add_to_tail(node_t *head, int value) {
  node_t *current = head;
  node_t *prev = NULL;

  while (current != NULL) {
    prev = current;
    current = current->next;
  }

  prev->next = node_create(value, NULL);

  return head;
}

node_t *add_to_head(node_t *head, int value) { return node_create(value, head); }

node_t *find(node_t *head, int item) {
  while (head != NULL) {
    if (head->value == item) {
      return head;
    }

    head = head->next;
  }

  return NULL;
}

node_t *remove_first(node_t *head, int item_to_delete) {
  if (head == NULL) {
    return NULL;
  }

  if (head->value == item_to_delete) {
    node_t *temp = head->next;
    free(head);
    return temp;
  }

  node_t *current = head;
  node_t *prev = NULL;

  while (current != NULL) {
    if (current->value == item_to_delete) {
      prev->next = current->next;
      free(current);
      return head;
    }

    prev = current;
    current = current->next;
  }

  return head;
}

node_t *remove_all(node_t *head, int item_to_delete) {
  if (head == NULL) {
    return NULL;
  }

  if (head->value == item_to_delete) {
    node_t *temp = head->next;
    free(head);
    head = temp;
  }

  node_t *current = head;
  node_t *prev = NULL;

  while (current != NULL) {
    if (current->value == item_to_delete) {
      prev->next = current->next;
      free(current);
      current = prev->next;
    } else {
      prev = current;
      current = current->next;
    }
  }

  return head;
}

node_t *remove_last(node_t *head, int item_to_delete) {
  node_t *last_prev = NULL;

  node_t *current = head;
  node_t *prev = NULL;

  while (current != NULL) {
    if (current->value == item_to_delete) {
      last_prev = prev;
    }

    prev = current;
    current = current->next;
  }

  if (last_prev == NULL) {
    if (head->value == item_to_delete) {
      node_t *temp = head->next;
      free(head);
      return temp;
    }
  } else {
    node_t *temp = last_prev->next;
    last_prev->next = last_prev->next->next;
    free(temp);
  }

  return head;
}
