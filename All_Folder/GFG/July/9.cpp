
class Solution{
  public:

//   struct Node
// {
//     int coeff;
//     int pow;
//     struct Node* next;
    
//     Node(int c, int p){
//         coeff = c;
//         pow = p;
//         next = NULL;
//     }
    
// };
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node* addPolynomial(Node *p1, Node *p2)
    {


        vector<int> v1;
        vector<int> v2;

        Node *temp1 = p1;
        Node *temp2 = p2;

        while(temp1 != NULL)
        {
            v1.push_back(temp1->coeff);
            v1.push_back(temp1->pow);
            temp1 = temp1->next;
        }
        while(temp2 != NULL)
        {
            v2.push_back(temp2->coeff);
            v2.push_back(temp2->pow);
            temp2 = temp2->next;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int i = 0;
        int j = 0;
        int k = 0;

        while(i < v1.size() && j < v2.size())
        {
            if(v1[i] == v2[j])
            {
                v1[i] = v1[i] + v2[j];
                i++;
                j++;
            }
            else if(v1[i] < v2[j])
            {
                v1[i] = v1[i] + v2[j];
                i++;
            }
            else
            {
                v1[i] = v1[i] + v2[j];
                j++;
            }
        }

        while(i < v1.size())
        {
            v1[i] = v1[i] + v2[j];
            i++;
            j++;
        }
        while(j < v2.size())
        {
            v1[i] = v1[i] + v2[j];
            i++;
            j++;
        }
        Node *head = NULL;
        Node *temp = NULL;
        for(int i = 0; i < v1.size(); i += 2)
        {
            if(head == NULL)
            {
                head = new Node(v1[i], v1[i+1]);
                temp = head;
            }
            else
            {
                temp->next = new Node(v1[i], v1[i+1]);
                temp = temp->next;
            }
        }

        return head;




        // Node *temp = p1;
        // while (temp != NULL)
        // {
        //     v1.push_back(temp->data);
        //     temp = temp->next;
        // }
        // temp = p2;
        // while (temp != NULL)
        // {
        //     v2.push_back(temp->data);
        //     temp = temp->next;
        // }
        // int n = max(v1.size(), v2.size());
        // int i = 0;
        // int j = 0;
        // int sum = 0;
        // Node *head = NULL;
        // Node *curr = NULL;
        // while (i < v1.size() && j < v2.size())
        // {
        //     sum = v1[i] + v2[j];
        //     if (head == NULL)
        //     {
        //         head = new Node(sum);
        //         curr = head;
        //     }
        //     else
        //     {
        //         curr->next = new Node(sum);
        //         curr = curr->next;
        //     }
        //     i++;
        //     j++;
        // }

        // while (i < v1.size())
        // {
        //     sum = v1[i];
        //     if (head == NULL)
        //     {
        //         head = new Node(sum);
        //         curr = head;
        //     }
        //     else
        //     {
        //         curr->next = new Node(sum);
        //         curr = curr->next;
        //     }
        //     i++;
        // }

        // while (j < v2.size())
        // {
        //     sum = v2[j];
        //     if (head == NULL)
        //     {
        //         head = new Node(sum);
        //         curr = head;
        //     }
        //     else
        //     {
        //         curr->next = new Node(sum);
        //         curr = curr->next;
        //     }
        //     j++;
        // }

        // return head;

        // Node *head = NULL;
        // Node *temp = NULL;
        // Node *temp1 = p1;
        // Node *temp2 = p2;
        // int sum = 0;
        // while (temp1 != NULL && temp2 != NULL)
        // {
        //     if (temp1->data > temp2->data)
        //     {
        //         sum = temp1->data - temp2->data;
        //         temp1 = temp1->next;
        //     }
        //     else if (temp1->data < temp2->data)
        //     {
        //         sum = temp2->data - temp1->data;
        //         temp2 = temp2->next;
        //     }
        //     else
        //     {
        //         sum = temp1->data + temp2->data;
        //         temp1 = temp1->next;
        //         temp2 = temp2->next;
        //     }
        //     if (head == NULL)
        //     {
        //         head = new Node(sum);
        //         temp = head;
        //     }
        //     else
        //     {
        //         temp->next = new Node(sum);
        //         temp = temp->next;
        //     }
        // }
        //Your code here
    }
};
