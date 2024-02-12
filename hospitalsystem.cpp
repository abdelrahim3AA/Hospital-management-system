#include <bits/stdc++.h>
using namespace std;
struct pationt
{
    string name;
    string state;

};
struct spec
{
    pationt arr_pationt[10];
    int ar_name[20]= {0};
    int c=0;
};
struct hospital
{
    spec arr_spec[20];
    int bc=0;
    int spec_number[20];
    void set_data()
    {
        bc++;
        string n;
        cout<< "enter specialization number [1 : 20] , for set data :-  "<< endl;
        cin>> n;
        int ret =0;
        ret = stoi(n);
        arr_spec[ret].ar_name[ret]++;
        if(arr_spec[ret].arr_pationt[arr_spec[ret].c+1].state=="r" && arr_spec[ret].c>=5)cout<< "sorry !! spec is full ....."<<endl;
        else
        {
            cout<< "entre [name] and [state] of patient :- "<<endl;
            string n_p,s_p;
            cout<< "name :  " ;
            cin>> n_p;
            cout<< "state [r : u] : ";
            cin>> s_p;
            if(s_p == "r" || s_p == "u")
            {
                arr_spec[ret].arr_pationt[arr_spec[ret].c].name = n_p;
                arr_spec[ret].arr_pationt[arr_spec[ret].c].state = s_p;
                arr_spec[ret].c++;
            }
            else cout<< "error !! for entries .... try again ."<<endl;
        }/*
        if(arr_spec[n].c>=5)
        {
            if(arr_spec[n].arr_pationt[arr_spec[n].c+1)
        }
        */
    }
    void note_for_you()
    {
        cout<< "welcome to you in hospital system ^_^ "<<endl;
        cout<< "some notes for help you :- "<<endl;
        cout<<"letter [ r ] means patient is regular ."<<endl;
        cout<<"letter [ u ] means patient is urgent  ."<<endl;
        cout<< "each number means one specialization in hospital [ EX : 1 = children , 2 = surgery , 1 ..... 20 ]"<<endl;

    }
    void dr_want_pationt()
    {
        int dr ;
        cout<< "pleas DR enter the specialization number : ";
        cin>> dr;
        if(arr_spec[dr].c == 0)cout<< "sorry !! there is no patient in this specialization ...... take a rest DR "<<endl;
        else
        {
            cout<< arr_spec[dr].arr_pationt[0].name<<" go with DR . ";
            for(int i=0; i<arr_spec[dr].c; i++)
            {
                arr_spec[dr].arr_pationt[i].name = arr_spec[dr].arr_pationt[i+1].name ;
                arr_spec[dr].arr_pationt[i].state = arr_spec[dr].arr_pationt[i+1].state ;
            }
            (arr_spec[dr].c)--;
        }
    }
    void print_data_specific_spec()
    {
        cout<< "enter specific specialization number for printing  : "<<endl;
        int x;
        cin>> x;
        bool r = false, kk = false ;
        int k=0;
        for(int i=0; i<arr_spec[x].c; i++)
        {
            //arr_spec[x].;
            if(arr_spec[x].arr_pationt[i].state=="r")
            {
                k = i;
                kk = true;
                continue;
            }
            if(kk==true)
            {
                if(arr_spec[x].arr_pationt[i].state=="u")
                {
                    swap(arr_spec[x].arr_pationt[k].name,arr_spec[x].arr_pationt[i].name);
                    swap(arr_spec[x].arr_pationt[k].state,arr_spec[x].arr_pationt[i].state);
                }

            }

        }
        if(arr_spec[x].c == 0) cout<< "there is no patient for printing !! "<<endl;
        else
        {
            cout<<endl<<"*********************************"<<endl;
            for(int i=0; i<arr_spec[x].c; i++)
            {
                cout<<"NAME : ["<<arr_spec[x].arr_pationt[i].name<<"]  ";
                if(arr_spec[x].arr_pationt[i].state=="r")
                    cout<<"STATE : [regular] "<<endl;
                else if(arr_spec[x].arr_pationt[i].state=="u")
                    cout<<"STATE : [urgent] "<<endl;
            }
            cout<< endl;
        }
    }

    void print_all_data()
    {
        int m=0;
        cout<< "*******************************"<<endl;
        cout<< "all data in HOSPITAL : "<<"\n\n";
        while(m!=21)

        {
            /*
                if(arr_spec[m].c!=0)
                {
                    if(arr_spec[m].c == arr_spec[m].ar_name[m])
                        cout<< "there are [ "<< arr_spec[m].c<<" ] in spec  [ "<< m<<" ]"<<endl;
                }
             */
            if(arr_spec[m].c !=0)
                cout<< "There are [ "<< arr_spec[m].c<<" ] patient , in specialization  [ "<< m<<" ]"<<endl;
            for(int i=0; i<arr_spec[m].c; i++)
            {
                cout<<"NAME : ["<<arr_spec[m].arr_pationt[i].name;
                if(arr_spec[m].arr_pationt[i].state=="r")
                    cout<<"]  STATE : [regular] "<<endl;
                else if(arr_spec[m].arr_pationt[i].state=="u")
                    cout<<"]  STATE : [urgent] "<<endl;
            }
            if(arr_spec[m].c !=0) cout<< endl;
            m++;
        }
    }
} h;
void new_pationt();
void print_by_spec_no();
void cprint_all_data();
int exit_f();
void dr_with_p();
void help();
void menu();
void ran();
int main()
{

    cout<< "enter for choice : "<<endl;
    cout<< "  (1) - print menu "<<endl;
    cout<< "  (2) - some notes for help you "<<endl;
    cout<< "  (3) - add a new patient "<<endl;
    cout<< "  (4) - print data for specific specialization"<<endl;
    cout<< "  (5) - Dr want patient "<<endl;
    cout<< "  (6) - print all data of patients"<<endl;
    cout<< "  (7) - Exit "<<endl;
    ran();
    return 0;
}
void new_pationt()
{
    h.set_data();
}
void print_by_spec_no()
{
    h.print_data_specific_spec();
}
void cprint_all_data()
{
    h.print_all_data();
}
void menu()
{
    cout<< "enter for choice : "<<endl;
    cout<< "  (1) - print menu "<<endl;
    cout<< "  (2) - some notes for help you "<<endl;
    cout<< "  (3) - add a new patient "<<endl;
    cout<< "  (4) - print data for specific specialization"<<endl;
    cout<< "  (5) - Dr want patient "<<endl;
    cout<< "  (6) - print all data of patients"<<endl;
    cout<< "  (7) - Exit "<<endl;
}
void help()
{
    h.note_for_you();
}
void dr_with_p()
{
    h.dr_want_pationt();
}
void ran()
{
    while(true)
    {
        string n;
        cin>> n;
        if(n=="1")menu();
        else
        {
            if(n=="1")menu();
            else if(n=="2")help();
            else if(n=="3")new_pationt();
            else if(n=="4")print_by_spec_no();
            else if(n=="5")dr_with_p();
            else if(n=="6")cprint_all_data();
            else if(n=="7")
            {
                cout<<"Thank you ^_^  "<<endl;
                break;
            }
            else cout<< "invalid !! please try again .... "<<endl;
        }
            cout<<endl <<"you can show the menu by enter [ 1 ] else choice from  [ 2 : 7 ]"<<endl;

    }

}


