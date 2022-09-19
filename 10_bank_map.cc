#include<iostream>
#include<string>
#include<map>
using namespace std;

struct customer
{
    int accNo;
    string name;
    float balance;
};

class Bank
{
    map<int, customer> v1;
    customer c1;
    public:
    void openAccount(int accno, string customer_name, float accBal)
    {
        if (accBal < 1000)
        {
            cout << "Minimum amt to deposit should be 1000" << endl;
            exit(0);
        }
        c1.accNo = accno;
        c1.name = customer_name;
        c1.balance = accBal;
        v1.insert(pair<int, customer>(accno, c1));
        cout << "Account opened successfully!!!" << endl;
    }
    void accOps(string ops, int accno, float cash_amt)
    {
        char buffer[50] = "\0";
        if (ops == "deposit")
        {
            v1[accno].balance += cash_amt;
            sprintf(buffer, "Amt %f credited to %d", cash_amt, accno);
            cout << buffer << endl;
        }
        else
        {
            if (v1[accno].balance < cash_amt)
            {
                cout << "Insufiicient balance" << endl;
                exit(0);
            }
            v1[accno].balance -= cash_amt;
            sprintf(buffer, "Amt %f debited from %d", cash_amt, accno);
            cout << buffer << endl;
        }
    }
    void showAcount()
    {
        customer map_value;
        for (auto each_customer : v1)
        {
            map_value = each_customer.second;
            cout << "Name " << map_value.name << " ";
            cout << "Account Number " << map_value.accNo << " ";
            cout << "Account balance " << map_value.balance << " ";
            cout << endl;
        }
        cout << endl;
    }
};

int get_account_no()
{
    int user_acc;
    cout << "Enter Account No: ";
    cin >> user_acc;
    return user_acc;
}

string get_name()
{
    string user_name;
    cout << "Enter Customer name: ";
    //getline(cin, user_name);
    cin.get();
    getline(cin, user_name);
    return user_name;
}

main()
{
    int choice;
    int c_acc;
    string c_name;
    float c_bal;
    Bank bank;
    while(1)
    {
        cout << "1. Open Account" << endl
             << "2. Cash deposit" << endl
             << "3. Cash Withdrawal" << endl
             << "4. Show Account Info" << endl
             << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                c_acc = get_account_no();
                c_name = get_name();
                cout << "Enter bal to deposit: ";
                cin >> c_bal;
                bank.openAccount(c_acc, c_name, c_bal);
                break;
            case 2:
                c_acc = get_account_no();
                cout << "Enter bal to deposit: ";
                cin >> c_bal;
                bank.accOps("deposit", c_acc, c_bal);
                break;
            case 3:
                c_acc = get_account_no();
                cout << "Enter bal to withdraw: ";
                cin >> c_bal;
                bank.accOps("withdrawal", c_acc, c_bal);
                break;
            case 4:
                bank.showAcount();
                break;
            case 5:
                exit(0);
        }
    }
}
