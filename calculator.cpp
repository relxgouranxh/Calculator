 #include <iostream>
 using namespace std;

class calculator{
    private:

    double  x;
    double  y;

    public:

    double add(double x,double y){
        return x+y;
    }

    double sub(double x,double y){
        return x-y;
    }

    double multiply(double x,double y){
        return x*y;
    }

    double division(double x,double y){
        return x/y;
    }

    double percentage(double x,double y){
        return (x/y)*100
    }


};

void operations(){
    cout<<"=========== CALCULATOR ============="<<endl;
    cout<<"press  1 for additon   "<<endl;
    cout<<"press  2 for subtration   "<<endl;
    cout<<"press  3 for multiply   "<<endl;
    cout<<"press  4 for division   "<<endl;
    cout<<"press  5 for percentage   "<<endl;
    

}

int main(){
    calculator op;
    int x;
    operations();
    cout<<"what operation u want yo perform -> ";
    cin>>x;
    double o1,o2;
    cout<<"enter 1st number -> ";
    cin>>o1;
    cout<<"enter 2nd number -> ";
    cin>>o2;

    switch (x)
    {
    case 1:
        cout<<"addition is : ";
        cout<<op.add(o1,o2);
        break;
    case 2:
        cout<<"subtraction is : ";
        cout<<op.sub(o1,o2);
        break;
    case 3: 
        cout<<"multiply  is : ";
        cout<<op.multiply(o1,o2);
        break;
    case 4:
        cout<<"division is : ";
        cout<<op.division(o1,o2);
        break;
    case 5:
        cout<<"percentage is : ";
        cout<<op.percentage(o1,o2);
        break;
    default:
    cout<<"enter the valid number ";
        break;
    }



}