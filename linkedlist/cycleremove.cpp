struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int main() {
    int N;
  
    vector<Node*> nodes(N);
    for (int i = 0; i < N; ++i) {
        int val;
        cin >> val;
        nodes[i] = new Node(val);
        if (i > 0) {
            nodes[i - 1]->next = nodes[i];
        }
    }

    int pos;
    cin >> pos;

    if (pos != -1 && pos < N) {
        nodes[N - 1]->next = nodes[pos];
    }

    Node* head = nodes[0];

    if (head && head->next) {
        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                slow = head;

                if (slow == fast) {
                    while (fast->next != slow) {
                        fast = fast->next;
                    }
                } else {
                    while (slow->next != fast->next) {
                        slow = slow->next;
                        fast = fast->next;
                    }
                }

                fast->next = nullptr;
                break;
            }
        }
    }

    Node* curr = head;
    while (curr) {
        cout << curr->data << (curr->next ? " " : "");
        curr = curr->next;
    }
    cout << "\n";

    return 0;
}