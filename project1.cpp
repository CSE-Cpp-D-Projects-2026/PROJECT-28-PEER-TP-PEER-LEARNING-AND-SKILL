#include<iostream>
using namespace std;
struct User
{
    string name;
    int id;
    string skill_offered;
    string skill_required;
    string availability;
};
int main()
{
    cout<<"WELCOME TO PEER-TO-PEER NETWORKING"<<endl;
    cout<<"Displaying the Dashboard"<<endl;
    cout<<"1. Register as a new user"<<endl;
    cout<<"2. view all registered users"<<endl;
    cout<<"3. Search for a user"<<endl;
    cout<<"4. Update user information"<<endl;
    cout<<"5. Match Details"<<endl;
    cout<<"6. Payment Details"<<endl;
    cout<<"7. Schedule learning sessions"<<endl;
    cout<<"8. Record Attendance"<<endl;
    cout<<"9 Reports"<<endl;
    cout<<"10. Exit"<<endl;
    cout<<"Enter your Dashboard options"<<endl;
    int option;
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"Registering as a new user"<<endl;
            cout<<"Enter How many records do you want: ";
            int n;
            cin>>n;
            User u[100];
            for(int i=0;i<n;i++)
            {
                cout<<"Enter details for user "<<i+1<<endl;
                cout<<"Name: ";
                cin>>u[i].name;
                cout<<"ID: ";
                cin>>u[i].id;
                cout<<"Skill Offered: ";
                cin>>u[i].skill_offered;
                cout<<"Skill Required: ";
                cin>>u[i].skill_required;
                cout<<"Availability: ";
                cin>>u[i].availability;
                if(u[i].name.empty() || u[i].skill_offered.empty() || u[i].skill_required.empty() || u[i].availability.empty())
                {
                    cout<<"Error: All fields are required. Please enter the details again."<<endl;
                    i--; 
                }
                int d=0;
                for(int j=0;j<i;j++)
                {
                    if(u[i].id==u[j].id)
                    {
                        cout<<"Error: Duplicate ID found. Please enter a unique ID."<<endl;
                        d=1;
                        i--; 
                        break;
                    }
                }
            }
            cout<<"User registration completed successfully!"<<endl;
    }
}