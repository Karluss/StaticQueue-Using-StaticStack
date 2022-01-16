//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include <iostream>
#include "StaticQueue.h"
#include "StaticStack.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    StaticStack mainQueue = Queue::Create();
    StaticStack auxQueue = Queue::Create();
    char elem0 = 's';
    char elem1 = 'b';
    char elem2 = 'c';
    char elem3 = 'd';

    cout << "Tamanho da fila:" << Queue::Size(mainQueue)<< endl;
    cout << "\nInserindo o elemento: " << elem0 << endl;
    Queue::Enqueue(mainQueue,elem0);
    cout << "Frente da fila: " << Queue::Front(mainQueue, auxQueue) << endl;
    cout << "Count:" << Queue::Count(mainQueue)<< endl;

    cout << "\nInserindo o elemento: " << elem1 << endl;
    Queue::Enqueue(mainQueue,elem1);
    cout << "Frente da fila: " << Queue::Front(mainQueue, auxQueue) << endl;
    cout << "Count:" << Queue::Count(mainQueue)<< endl;

    cout << "\nInserindo o elemento: " << elem2 << endl;
    Queue::Enqueue(mainQueue,elem2);
    cout << "Frente da fila: " << Queue::Front(mainQueue, auxQueue) << endl;
    cout << "Count:" << Queue::Count(mainQueue)<< endl;

    cout << "\nRetirando " << Queue::Front(mainQueue, auxQueue) << "... " <<  endl;
    Queue::Dequeue(mainQueue,auxQueue);
    cout << "Frente da fila: " << Queue::Front(mainQueue, auxQueue) << endl;
    cout << "Count:" << Queue::Count(mainQueue)<< endl;

    cout << "\nRetirando " << Queue::Front(mainQueue, auxQueue) << "... " <<  endl;
    Queue::Dequeue(mainQueue,auxQueue);
    cout << "Frente da fila: " << Queue::Front(mainQueue, auxQueue) << endl;
    cout << "Count:" << Queue::Count(mainQueue)<< endl;

    cout << "\nInserindo o elemento: " << elem3 << endl;
    Queue::Enqueue(mainQueue,elem3);
    cout << "Frente da fila: " << Queue::Front(mainQueue, auxQueue) << endl;
    cout << "Count:" << Queue::Count(mainQueue)<< endl;

    cout << "\nVazio? " << (Queue::IsEmpty(mainQueue) ? "Sim" : "Não") << endl;
    cout << "\nLimpando..." << endl;
    Clear(mainQueue);
    cout << "\nVazio? " << (Queue::IsEmpty(mainQueue) ? "Sim" : "Não");
}
