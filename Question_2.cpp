#include <iostream>
#include <string.h>

using namespace std;

/* Question 2.a
 a funtion that ask for student details*/

void    studentDetails(string &name, string &surname, string &schoolName)
{
    cout << "Please key in your\nname: ";
    cin >> name >> surname;
    cin.get();
    cout << "Please key in the name of your\nschool: ";
    getline(cin, schoolName);
}

/* Question 2.b
 a funtion that gets the student marks*/

void    getMarks(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    cout << "Key in your mark for English:"<<endl;
    cin >> Eng;
    cout << "Key in your mark for Mathematics:"<<endl;
    cin >> Math;
    cout << "Key in your mark for Life Orientation:"<<endl;
    cin >> LO;
    cout << "Key in your mark for History:"<<endl;
    cin >> Hist;
    cout << "Key in your mark for Computer literacy:"<<endl;
    cin >> Comp_Lit;
    cout << "Key in your mark for Art:"<<endl;
    cin >> Art;
}

/* Question 2.c
 a funtion that calculates the avarage year marks for the student */

float   calcAvarageYearMark(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    float   roundAvrg, avarage;

    avarage = (Eng + Math + LO + Hist + Comp_Lit + Art) / 6;
    roundAvrg = (int)(avarage * 100 + .5);
    return (float)roundAvrg / 100;
}

/* Question 2.d
 a funtion that finds the lowest and the highest marks */

void    minMax(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    float   marks_list[] = {Eng, Math, LO, Hist, Comp_Lit, Art};
    int small;
    int big;
    int i = 0;
    int j = 0;



    small = marks_list[i];
    while (i != 6)
    {
        if (marks_list[i] <= small)
        {
            small = marks_list[i];
        }
        i++;
    }

    big = marks_list[j];
    while (j != 6)
    {
        if (marks_list[j] >= big)
        {
            big = marks_list[j];
        }
        j++;
    }

    cout << "The highest mark was\n" << big << "%";
    cout << " The lowest mark was\n" << small << "%" << endl;
    cout << "**********************************************************\n" << endl;
}

/* Question 2.e
 a funtion that checks if a student passed or failed */

void    passOrFail(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    float   mark_list[] = {Eng, Math, LO, Hist, Comp_Lit, Art};
    int i = 0;
    int count_sum = 0;


    while (i != 6)
    {
        if (mark_list[i] >= 50)
        {
            count_sum++;
        }
        i++;
    }
    if (Eng >= 50 && count_sum >= 4)
    {
        cout << "Outcome: Passed\n" << endl;
    }
    else if (Eng <= 50 || count_sum < 4)
    {
        cout << "Outcome: Fail\n" <<endl;
    }

}

/* Question 2.f
 a funtion that checks to Award students with distinctions */

void    awardDistinction(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    float   avarage = calcAvarageYearMark(Eng, Math, LO, Hist, Comp_Lit, Art);
    float   dist_list[] = {Eng, Math, LO, Hist, Comp_Lit, Art};
    int i = 0;
    int count_pass = 0;

    while (i != 6)
    {
        if (dist_list[i] >= 50)
        {
            count_pass++;
        }
        i++;
    }
    /* a special you passed with distion message is printed out if learner have an avarage that is 75 and Above*/
    if (avarage >= 75 && Eng >= 50 && count_pass >= 3)
    {
        cout << "**************** You passed with DISTINCTION ***************" << endl;
    }
    i = 0;
    cout << "*****            Subjects Passed with Distiction *****\n\n";
    while(i != 6)
    {
        if (dist_list[i] >= 75 && i == 0)
        {
            cout <<  "Engish: " << dist_list[i] << "\n";
        }
        if (dist_list[i] >= 75 && i == 1)
        {
            cout <<  "Mathamatics: "<< dist_list[i] << "\n";
        }
        if (dist_list[i] >= 75 && i == 2)
        {
            cout <<  "Life Orientation: " << dist_list[i] << "\n";
        }
        if (dist_list[i] >= 75 && i == 3)
        {
            cout <<  "Histoty: " << dist_list[i] << "\n";
        }
        if (dist_list[i] >= 75 && i == 4)
        {
            cout <<  "Computer Literracy: " << dist_list[i] << "\n";
        }
        if (dist_list[i] >= 75 && i == 5)
        {
            cout <<  "Art: " << dist_list[i] << "\n";
        }
        i++;
    }
}

/* Question 2.g
 a funtion that finds the matching code and symbol for the student marks */

void    codeSymbol(float &mark)
{
    string  symbol = " ";
    int code = 0;

    if (mark >= 80 && mark <= 100)
    {
        symbol = "A";
        code = 7;
    }
    if (mark >= 70 && mark <= 79)
    {
        symbol = "B";
        code = 6;
    }
    if (mark >= 60 && mark <= 69)
    {
        symbol = "C";
        code = 5;
    }
    if (mark >= 50 && mark <= 59)
    {
        symbol = "D";
        code = 4;
    }
    if (mark >= 40 && mark <= 49)
    {
        symbol = "E";
        code = 3;
    }
    if (mark >= 30 && mark <= 39)
    {
        symbol = "F";
        code = 2;
    }
    if (mark >= 0 && mark <= 29)
    {
        symbol = "FF";
        code = 1;
    }
    cout << "%         " << symbol << "           " << code <<endl;
}


/* these is a funtion that independantly check for the code and symbol for the avarage and prints it out */

void    avarageCodeSymbol(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    float   Avrg = calcAvarageYearMark(Eng, Math, LO, Hist, Comp_Lit, Art);


    if (Avrg >= 80 && Avrg <= 100)
    {
        cout << " with Symbol A and code 7" << endl;
    }
    if (Avrg >= 70 && Avrg <= 79)
    {
        cout << " with Symbol B and code 6" << endl;
    }
    if (Avrg >= 60 && Avrg <= 69)
    {
        cout << " with Symbol C and code 5" << endl;
    }
    if (Avrg >= 50 && Avrg <= 59)
    {
        cout << " with Symbol D and code 4" << endl;
    }
    if (Avrg >= 40 && Avrg <= 49)
    {
        cout << " with Symbol E and code 3" << endl;
    }
    if (Avrg >= 30 && Avrg <= 39)
    {
        cout << " with Symbol F and code 2" << endl;
    }
    if (Avrg >= 0 && Avrg <= 29)
    {
        cout << " with Symbol FF and code 1" << endl;
    }
}

/* Question 2.h
 a funtion that displays the student report */
void    displayReport(float &Eng, float &Math, float &LO, float &Hist, float &Comp_Lit, float &Art)
{
    float   eng, math, lo, hist, comp_lit, art;
    string  subject_name[] = {"English", "Mathematics", "Life Orientation", "History", "Computer literacy", "Art"};
    int     index = 0;
    float   Avrg;
    float   mark;
    string name, surname, schoolname;

    studentDetails(name, surname, schoolname);
    getMarks(eng, math, lo, hist, comp_lit, art);
    if ((eng < 0 || eng > 100) || (math < 0 || math > 100) || (lo < 0 || lo > 100) || (hist < 0 || hist > 100)
         || (comp_lit < 0 || comp_lit > 100) || (art < 0 || art > 100))
    {
        cout << "your marks are invalid, Please enter a mark between 0 and 100"<<endl;
        getMarks(eng, math, lo, hist, comp_lit, art);
    }

    cout << "\n***********************************************************\n" << endl;
    cout << "              **** STUDENT ACADEMIC RECORD\n";
    cout << "this program inputs the learner marks of matric\nlevel subjects and prints the student final report.\n\n";
    cout << "*************************************************************\n****\n\n";

    cout << "Name: " << name << " " << surname << "              School: " << schoolname << "\n" <<endl;

    cout << "Subject                    Mark        Symbol      Code"<<endl;

    while (index != 6)
    {
        if (index == 0)
        {
            cout << subject_name[0];
            cout << "                     " << eng;
            codeSymbol(eng);
        }
        if (index == 1)
        {
            cout << subject_name[1];
            cout << "                 " << math;
            codeSymbol(math);
        }
        if (index == 2)
        {
            cout << subject_name[2];
            cout << "            " << lo;
            codeSymbol(lo);
        }
        if (index == 3)
        {
            cout << subject_name[3];
            cout << "                     " << hist;
            codeSymbol(hist);
        }
        if (index == 4)
        {
            cout << subject_name[4];
            cout << "           " << comp_lit;
            codeSymbol(comp_lit);
        }
        index++;
    }
    cout << subject_name[5];
    cout << "                         " << art;
    codeSymbol(art);
    cout << "\n\n";

    Avrg = calcAvarageYearMark(eng, math, lo, hist, comp_lit, art);
    cout << "Avarage Year Mark: " << Avrg;

    avarageCodeSymbol(eng, math, lo, hist, comp_lit, art);

    passOrFail(eng, math, lo, hist, comp_lit, art);

    minMax(eng, math, lo, hist, comp_lit, art);

    awardDistinction(eng, math, lo, hist, comp_lit, art);

}


int main()
{
    float Eng, Math, LO, Hist, Comp_Lit, Art;

    displayReport(Eng, Math, LO, Hist, Comp_Lit, Art);

    return 0;
}
