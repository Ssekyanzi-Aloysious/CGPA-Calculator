#include <bits/stdc++.h>
using namespace std;

int main()
{
    int semesters_done;
    int total_grade_points = 0; //to hold gradepoints obtained in all semesters
    int total_quality_points = 0;//to hold qualitypoints obtained in all semesters
    int units=0;// to hold units done in a semester;
    cout<<"Enter Number of semesters completed: ";
    cin>>semesters_done;

    for(int i=0;i<semesters_done;++i){
        int course_units;// number of course units done in a semester
        int grade_points=0;//to hold gradepoints obtained in one semester
        int quality_points=0;// product of gradepoint and creditunit

        cout<<"How many course units for semester "<<i+1<<": ";
        cin>>course_units;
        units = course_units;
        cout<<"Enter grades obtained eg. A. and the credit units of the course unit.\n";

        for(int j=0;j<course_units;++j){
            char g;//to hold grade
            int cu;//to hold credit units
            cout<<"\nGrade: ";
            cin>>g;
            cout<<"Credit units: ";
            cin>>cu;

            switch( toupper(g) ){
                case 'A': {grade_points+=5; quality_points = cu*5; break;}
                case 'B': {grade_points+=4; quality_points = cu*4; break;}
                case 'C': {grade_points+=3; quality_points = cu*3; break;}
                case 'D': {grade_points+=2; quality_points = cu*2; break;}
                case 'E': {grade_points+=1; quality_points = cu*1; break;}
                case 'F': {grade_points+=0; quality_points = 0; break;}
                default : cout<<"Taking that as F";grade_points+0; quality_points = 0; break;
            }
            total_quality_points += quality_points;//not sure yet but didnt work outside this block
        }
        total_grade_points += grade_points;

        cout<<"\nGrade points in semester"<<i+1<<" :"<<grade_points<<endl;
        cout<<"Total grade points: "<<total_grade_points<<endl;
        cout<<"Total quality points: "<<total_quality_points<<"\n\n"<<endl;
    }

    double GPA = total_grade_points/double(units);
    double CGPA = total_quality_points/double(total_grade_points);
    if(semesters_done==1)cout<<"GPA: "<<GPA<<endl;
    else cout<<"CGPA: "<<CGPA<<endl;

    return 0;
}
