#include <QCoreApplication>
#include<QList>
#include<bits/stdc++.h>
using namespace  std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int>list;
    for(int i=1;i<=5;i++){
        list.append(i);
    }
    cout<<"before delete list size = "<<list.size()<<endl;
    list.removeFirst();
    cout<<"after delete list size = "<<list.size()<<endl;

    for(int i=0;i<list.size();i++){
        cout<<list[i]<<" ";
    }
    //list.append(10);
    cout<<endl;

    for(int j=0;j<3;j++){

        list.removeFirst();
        list.append(20);
        for(int i=0;i<list.size();i++){
            cout<<list[i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return a.exec();
}
