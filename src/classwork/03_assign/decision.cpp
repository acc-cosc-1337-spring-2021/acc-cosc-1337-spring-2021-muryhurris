//cpp
#include "decision.h"

string get_letter_grade_using_if(int grade)
{
    if(grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        return "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        return "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        return "D";
    }
    else if(grade >= 0 && grade <= 59)
    {
        return "F";
    }
    else
    {
        return "Number out of range.";
    }
    return 0;
}

string get_letter_grade_using_switch(int grade)
{
    string result; 

    switch(grade)
    {
        case 90 ... 100:
            result = "A";
            break;
         case 80 ... 89:
            result = "B";
            break;
          case 70 ... 79:
            result = "C";
            break;
         case 60 ... 69:
            result = "D";
            break;
         case 0 ... 59:
            result = "F";
            break;
         default:
            result = "Number out of range.";
        
    }
        return result;
}
