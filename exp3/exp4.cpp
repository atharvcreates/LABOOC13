//TO develop simple banking system
#include <iostream>
using namespace std;
//saving acc class
class savingaccount {
    private:
    string accountholdername;
    int accountnumber;
    double balance;
     double interestrate;
public:
savingaccount(string name, int accnumber, double initialbalance, double rate)

{accountholdername = name;
    accountnumber = accnumber;
    balance = initialbalance;
    interestrate = rate;
}
void deposit(double amount){
    if(amount>0){
        balance += amount;
        cout<<"deposited:₹"<<amount<<endl;

    }
}
void withdraw(double amount)
{
if(amount>0&&amount<=balance){
balance-=amount;
cout<<"withdraw:₹"<<amount<<endl;
    }else{
    cout<<"insufficient balance!"<<endl;
    }
    }
    void applyinterest(){
    double interest = balance*interestrate/100;
    balance +=interest;
    cout<<"interest applied: ₹"<<interest<<endl;
    }
    void display(){
    cout<<"n[savingaccount]"<<endl;
    cout<<"accountholder:"<<accountholdername<<endl;
    cout<<"accountnumber:"<<accountnumber<<endl;
    cout<<"balance:"<<balance<<endl;
    cout<<"interestrate:"<<interestrate<<"%"<<endl;
    }
    };
    //checking account class
    class checkingaccount {
    private:
    string accountholdername;
    int accountnumber;
    double balance;
    double transactionfee;
    public:
   
    checkingaccount(string name, int accnumber, double initialbalance, double fee){
    accountholdername =name;
    accountnumber = accnumber;
    balance=initialbalance;
    transactionfee=fee;
    }
    void deposit(double amount){
    if(amount>0){
    balance+=amount;
    cout<<"deposited: ₹"<<amount<<endl;
    }
    }
    void withdraw(double amount){
    double total = amount+transactionfee;
    if(amount > 0 && total<=balance){
    balance-=total;
    cout<<"withrawn:₹"<<amount<<"(₹"<<transactionfee<<"feeapplied)"<<endl;
    }else{
    cout<<"insufficient balance for withdrawal+fee!"<<endl;
    }
    }
    void display(){
    cout<<"\n[checkingaccount]"<<endl;
    cout<<"accountholder:"<<accountholdername<<endl;
    cout<<"accountnumber:"<<accountnumber<<endl;
    cout<<"balance:"<<balance<<endl;
    cout<<"transactionfee:"<<transactionfee<<endl;

    }
    };
    int main(){
    savingaccount s("Alice", 12345, 1000.0, 5.0);
    checkingaccount c("Bob", 67890, 2000.0, 10.0);

    s.display();
    s.deposit(500);
    s.withdraw(200);
    s.applyinterest();
    s.display();
    c.display();
    c.deposit(1000);
    c.withdraw(500);
    c.display();
    return 0;
    }