#include "Menu.h"

#include "lib.h"

using namespace std;

int comp(Group* j, Group* i)
{
    return (int)(((Group*)j)->get_number() - ((Group*)i)->get_number());
}

//void Menu::main_menu()
//{
//    while (exit == 1)
//    {
//        switch (show_options())
//        {
//        case 1:
//            show_all_humans();
//            break;
//        case 2:
//            change_data();
//            break;
//        case 3:
//            add_new();
//            break;
//        case 4:
//            save_to_file();
//            break;
//        case 5:
//            load_from_file();
//            break;
//        case 6:
//            delete_human();
//            break;
//        case 7:
//            average_stud();
//            break;
//        default:
//            exit_from_programm();
//            break;
//        }
//    }
//}
//
//void Menu::average_stud()
//{
//    double a;
//    cout << "\nEnter ball" << endl;
//    cin >> a;
//    try
//    {
//        if (list.get_size() == 0)
//        {
//            throw "There's nothing to show.";
//        }
//        for (int i = 0; i < list.get_size(); i++)
//        {
//            if ((list[i]->averball(a)) == true) list[i]->show();
//        }
//    }
//    catch (const char* ex) { cout << ex << endl; }
//    system("pause");
//
//}
//

int Menu::show_options()
{
    int c1;
    cout << "\nWhat do you want to do?" << endl;
    cout << "Task #1" << endl;
    cout << "1 - Show all groups" << endl;
    cout << "2 - Add group" << endl;
    cout << "3 - Add new student" << endl;
    cout << "4 - Delete a group" << endl;
    cout << "5 - Delete a student" << endl;
    cout << "6 - Displaying all students if the whose average score is greater than the specified one;" << endl;
    //To work correctly, you need to enter a real number, with two numbers after the dot
    cout << "7 - Output of students with the entered average ball" << endl;
    cout << "Task #2" << endl;
    cout << "0 - Exit" << endl;
    cout << "->  ";
    cin >> c1;
    return c1;
}


void Menu::show_all()
{
    system("cls");
    try
    {
        if (count == 0)
        {
            throw "There's nothing to show.";
        }
        for (int i = 0; i < count; i++)
        {
            cout << "_" << endl;
            cout << i + 1 << "|";
            list[i].show();
        }
    }
    catch (const char* ex) { cout << ex << endl; }
    system("pause");
}
//
//void Menu::change_data()
//{
//    int c2, c3;
//    system("cls");
//    try
//    {
//        cout << "What human do you want to change (from 1 to " << list.get_size() << ")?" << endl;
//        cin >> c2;
//
//        if ((c2 < 1) || (c2 > list.get_size()))
//        {
//            throw "Incorrect number!";
//        }
//
//        list[c2 - 1]->show();
//        cout << "What string do you want to change?" << endl;
//        cout << "->  ";
//        cin >> c3;
//        cin.ignore(32767, '\n');
//        cout << "What do you want to put in this string?" << endl;
//        cout << "->  ";
//        if (c3 == 5)
//        {
//            bool fl = false;
//            while (fl == false)
//            {
//                try
//                {
//
//                    getline(cin, redact);
//                    float f = stof(redact);
//                    fl = true;
//                }
//                catch (...)
//                {
//                    cout << "Enter the number" << endl;
//
//                }
//            }
//            list[c2 - 1]->redact_str(c3, redact);
//        }
//        else
//        {
//            getline(cin, redact);
//            list[c2 - 1]->redact_str(c3, redact);
//            cout << "The string was redacted." << endl;
//        }
//    }
//    catch (const char* ex) { cout << ex << endl; }
//    system("pause");
//}

      

void Menu::add_new_stud(int num)
{
    //system("cls");
    Student* student;
    student = new Student;
    student->rewrite();
    this->list[num-1].insert(student);
    system("pause");
}

void Menu::delete_student()
{
    
    cout << "";
}

void Menu::add_new_group()
{
    system("cls");
    int num, q;
    cout << "Enter number of group:";
    cin >> num;
    //Quante persone Vuoi aggiungere a un gruppo?
    /*cout << "How many people do you want to add to the group?: ";
    cin >> q;*/

    Group* backup = new Group[count];
    for (int i = 0; i < count; i++)
    {
        backup[i] = list[i];
    }
    list = new Group[count + 1];

    list[count] = *(new Group(0, num));

    for (int i = 0; i < count; i++)
    {
        list[i] = backup[i];

    }

    

    
    count++;
    qsort(list, count, sizeof(*list), (int(*)(const void*, const void*))comp);
    system("pause");
}




//void Menu::delete_human()
//{
//    int c2;
//    system("cls");
//    cout << "What person do you want to change (from 1 to " << list.get_size() << ")?" << endl;
//    for (int i = 0; i < list.get_size(); i++)
//    {
//        cout << "_" << endl;
//        cout << i + 1 << "|";
//        list[i]->show();
//    }
//    cout << "->  ";
//    cin >> c2;
//    c2 = list.get_size() - c2 + 1;
//    try {
//        if ((c2 < 1) || (c2 > list.get_size()))
//        {
//            throw "Incorrect number!";
//        }
//        list.remove(c2 - 1);
//        cout << "The chosen person was deleted." << endl;
//        system("pause");
//    }
//    catch (const char* i)
//    {
//        cout << i << endl;
//
//    }
//
//
//}
//
//void Menu::exit_from_programm()
//{
//    exit = 0;
//}