#include<bits/stdc++.h>

#define wah using
#define wahh namespace
#define wahhh std

wah wahh wahhh;

struct Card{
    short data;
    Card *next;
};

class Deck{
    private:
        Card *head,*tail;
    public:
        Deck(){
            head = NULL;
            tail = NULL;
        }
        void add_card(int n){
            Card *tmp = new Card;
            tmp->data = n;
            tmp->next = NULL;

            if(head == NULL){
                head = tmp;
                tail = tmp;
            }
            else{
                tail->next = tmp;
                tail = tail->next;
            }
        }
        Card* get_head(){
            return head;
        }
        Card* get_card(unsigned int n){
            Card *tmp;
            tmp = head;
            for(unsigned int i = 0; i < n; i++){
                tmp = tmp->next;
            }
            return tmp;
        }
        void swap(unsigned int n){ // lom selese
            // if (a->next == NULL)
            //     a->next = b;
            // else
            //     swap(a->next,b);
            // display();
            // cout << endl << endl;
            Card* subject1 = get_card(n - 1);
            Card* subject2 = get_card(n);
            Card* last = tail;
            Card* first = head;
            head = subject2;
            last->next = first;
            tail = subject1;
            tail->next = NULL;
            // display();
            // cout << endl << endl;
            
        }
        void display()
        {
            Card *tmp;
            tmp = head;
            while (tmp != NULL)
            {
                cout << tmp->data << endl;
                tmp = tmp->next;
            }
        }
};

int main(){
    short t, i, n, a, b, temp;

    cin >> t;

    for(; t > 0; t--){
        cin >> n >> a >> b;
        Deck deck;
        for(i = 0; i < n; i++){
            cin >> temp;
            deck.add_card(temp);
        }
        if(n != 1){
            for(i = 0; i < b; i++){
                deck.swap(n - a);
            }
        }
        // cout << deck.get_card(2)->data << endl;
        cout << deck.get_head()->data << endl;
    }

}