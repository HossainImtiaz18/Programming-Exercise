#include <iostream>
#include <iomanip>
#include <cstring>
#include <malloc.h>

using namespace std;

class Student
{
  public:
    char Roll[20];
    char Name[20];
    float Gpa;
    class Student *Next;
}*Head,*Tail;

void Insert();
void Traverse();
void delete_Item();

int main()
{
    int x=0;
    char ch;
    while(!x)
    {
        cout<<"\nEnter your choice:\n\n";
        cout<<"1->To Insert a Record.\n";
        cout<<"2->To Traverse the List.\n";
        cout<<"3->To Delete a Record.\n";
        cout<<"4->To Exit.\n";
        cin>>ch;
        switch(ch)
        {
            case '1':
            Insert();
            break;
            case '2':
            Traverse();
            break;
            case '3':
            delete_Item();
            break;
            case '4':
            x=1;
            break;
        }
    }
    return 0;
}


void Insert(void)
{
    struct Student *Sptr;
    Sptr=(struct Student *)malloc(sizeof(struct Student));
    cout<<"\n\nNow Enter Your Data:\n\n";
    cin>>Sptr->Roll;
    cin>>Sptr->Name;
    cin>>Sptr->Gpa;
    Sptr->Next=NULL;
    if(!Head)
    {
        Head=Sptr;
        Tail=Sptr;
    }
    else
    {
        Tail->Next=Sptr;
        Tail=Sptr;
        Tail->Next=NULL;
    }

}




void Traverse(void)
{
    struct Student *Sptr;
    int c=0;
    Sptr=Head;
    while(!Sptr)
    {
        cout<<"\n\nThe list is empty:\n\n";
    }
    cout<<"\n\n";
    cout<<"\nContents of the list is listed below:\n\n";
    while(Sptr)
    {
        cout<<++c;
        cout<<setw(10)<<Sptr->Roll;
        cout<<setw(10)<<Sptr->Name;
        cout<<setw(10)<<Sptr->Gpa;
        cout<<endl;
        Sptr=Sptr->Next;
    }
    cout<<"\nPress any key to continue:\n";
}


void delete_Item(void)
{
    struct Student *Sptr,*Prev;
    char Roll[20];
    cout<<"\n\nEnter the Roll to be deleted:\n\n";
    cin>>Roll;
    Sptr=Head;
    while(Sptr)
    {
        if(!strcmp(Sptr->Roll,Roll))
        break;
        else
        Prev=Sptr;
        Sptr=Sptr->Next;

    }
    if(Sptr)
    {
        if(Sptr==Head)
        Head=Sptr->Next;
        if(Sptr==Tail)
        {
            Prev->Next=NULL;
            Tail=Prev;
        }
        Prev->Next=Sptr->Next;
        cout<<"\n\nThe Student With Roll "<<Roll<<" is deleted:\n\n";
        cout<<"\n\nPress any key:\n";
        free(Sptr);
    }
    else
    {
        cout<<"\n\nThe Student with Roll is not found:\n\n";
    }
}
