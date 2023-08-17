#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    string name,faculty;
    int roll_no,feedback,n=0,search_roll;
    ofstream fout("student.txt",iostream::app);
    int choice;
    ifstream fin("student.txt");

    while (true)
    {

        cout<<"1.Add record"<<endl;
        cout<<"2.List the record"<<endl;
        cout<<"3.Search by roll number"<<endl;
        cout<<"4.DELETE File"<<endl; 
        cout<<"5.EXIT"<<endl;
        
        cout<<endl;
        cout<<endl;
        cin>>choice;
        
        //ifstream fin("student.txt");

    
        switch(choice)
        {
            case 1:
                cout<<"Enter the Name:";
                cin.ignore();
                getline(cin,name);
                cout<<"Enter roll number: ";
                cin>>roll_no;
                cout<<"Enter the faculty: ";
                cin.ignore();
                getline(cin,faculty);

                fout<<name<<endl;
                fout<<roll_no<<endl;
                fout<<faculty<<endl;
                n++;
            break;

            case 2:
                cout<<n<<endl;
                for(int i=0;i<n;i++)
                {
                    
                    getline(fin,name);
                    fin>>roll_no;
                    fin.get();
                    getline(fin,faculty);

                    cout<<"Name: "<<name<<endl;
                    cout<<"Roll_no: "<<roll_no<<endl;
                    cout<<"Faculty:"<<faculty<<endl;
                }
                
            break;

            case 3:
                cout<<"Enter the roll no to be searched : ";
                cin>>search_roll;
                
                for(int i=0;i<n;i++)
                {
                            getline(fin,name);
                            fin>>roll_no;
                            fin>>faculty;
                            cout<<faculty;
                            
                            
                    
                        if(search_roll==roll_no)
                        {
                    
                            cout<<"Name: "<<name<<endl;
                            cout<<"Roll no: "<<roll_no<<endl;
                            cout<<"faculty :"<<faculty<<endl;
                            cout<<endl<<endl;
                            break;
                        }
                    }    
                
            break;
            case 4:
                fout.close();
                fin.close();
                feedback = remove("student.txt");
                if (feedback == 0) 
                {
                    cout << "The file has been successfully deleted!!!!!!!";
                }
                
                else 
                {
                    cout << "The file does not exist.";
                }
            break;

            case 5:
                fout.close();
                fin.close();
                return 0;

            default:
            cout <<"bye";

        
        }

    }

}