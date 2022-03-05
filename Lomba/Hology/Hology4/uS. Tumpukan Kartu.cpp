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
        Card* get_card(unsigned int ind){
            Card *tmp;
            tmp = head;
            for(; ind > 0; ind--){
                tmp = tmp->next;
            }
            return tmp;
        }
        static void swap(Card *a,Card *b){

            if (a->next == NULL)
                a->next = b;
            else
                swap(a->next,b);
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
        cout << deck.get_card(2)->data << endl;
        cout << deck.get_head() << endl;
    }

}