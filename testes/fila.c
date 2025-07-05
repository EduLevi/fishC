typedef struct Node{
	int data;
	struct Node* next;
}Node;

typedef struct Queue{
	Node* front;	//frente da fila
	Node* rear;	//final da fila
}Queue;

void inicializeQueue(Queue* q){
	q->front = NULL;
	q->rear = NULL;
}

void enqueue(Queue* q, int value){	//inseir no final da fila
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = value;
	newNode-> NULL;

	if(q->rear == )

}
