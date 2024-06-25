#include<bits/stdc++.h>
using namespace std;

class StudentDataStor {
public:
    string name;
    string roll;
    string department;

    StudentDataStor(string n, string r, string dept) : name(n), roll(r), department(dept) {}

    string getName() const {
        return name;
    }

    string getRoll() const {
        return roll;
    }

    string getDept() const {
        return department;
    }
};

class SearchStudent {
public:
    static void searchName(const vector<StudentDataStor>& Students, const string& name) {
        bool found = false;

        for (auto it : Students) {
            if (it.getName() == name) {
                found = true;
                cout << "Student Found!" << endl;
                
            cout<<"Name : "<<it.getName()<<endl;
            cout<<"Roll :"<<it.getRoll()<<endl;
            cout<<"Department :"<<it.getDept()<<endl;
                break;
            }
        }

        if (!found) {
            cout << "Student Not Found" << endl;
        }
    }
};


int main()
{
    vector<StudentDataStor>Students;    // data stor

    bool ok=true;

   
    while(ok){

    int choice;                          //input choice first
    cout<<"Enter your choice : "<<endl;
    cout<<"1 . Name Search "<<endl;
    cout<<"2 . Input Student Data "<<endl;
    cout<<"3 . Exit Program "<<endl;

    cin>>choice;

    switch(choice)
    {
        case 1: {                  // handle for search
            string name;
            cout<<"Enter name to search"<<endl;
            cin>>name;

            SearchStudent::searchName(Students, name);

            
            break;
        }

        case 2: {
            string name, dept;
            string roll;
            cout<<"Enter Name : ";
            cin>>name;

            cout<<"Enter Roll : ";
            cin>>roll;

            cout<<"Enter Department : ";
            cin>>dept;


            Students.push_back(StudentDataStor(name, roll, dept));             // store in vector
            
            
            cout<<"Student add Successfully !"<<endl; 


            break;
        }
        case 3: {
            cout<<"EXIT PROGRAM"<<endl;
            ok=false;
            break;
           
        }

        default:
        cout<<"Invalid choice "<<endl;
    }

  }


}