#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

enum enQuestionLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };

enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enQuestionLevel QuestionLevel;
    enOperationType OperationType;
    int CorrectAnswer = 0;
    int PlayerAnswer;
    bool AnswerResualt = false;
};

struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestion = 0;
    enQuestionLevel QuestionLevel;
    enOperationType OpType;
    short NumberOfRightAnswer = 0;
    short NumberOfWrongAnswer = 0;
    bool isPass;
};

int ReadHowManyQuestion()
{
    short NumberOfQuestion = 0;
    do {
        cout << " How many Question do you want to answer: ";
        cin >> NumberOfQuestion;
    } while (NumberOfQuestion > 10 || NumberOfQuestion < 1);
    return NumberOfQuestion;
}

enQuestionLevel ReadQuestionLevel()
{
    short QuestionLevel = 0;
    do {
        cout << " enter [1]EasyLevel,[2]MedLevel,[3]HardLevel,[4]Mix ";
        cin >> QuestionLevel;
    } while (QuestionLevel > 4 || QuestionLevel < 1);
    return (enQuestionLevel)QuestionLevel;
}

enOperationType ReadOperationType()
{
    short OperationType = 0;
    do {
        cout << " enter [1]Add,[2]Sub,[3]Mult,Div[4],Mix[5]";
        cin >> OperationType;
    } while (OperationType > 5 || OperationType < 1);
    return (enOperationType)OperationType;
}

int simpleCalculator(int number1, int number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return number1 + number2;
    case enOperationType::Sub:
        return number1 - number2;
    case enOperationType::Mult:
        return number1 * number2;
    case enOperationType::Div:
        return number1 / number2;
    }
}

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

enOperationType GetRandomOperationType()
{
    short RandomOpType = 0;
    RandomOpType = RandomNumber(1, 4);
    return (enOperationType)RandomOpType;
}

stQuestion GenerateQuestion(enQuestionLevel QuestionLevel, enOperationType OperationType)
{
    stQuestion Question;
    //stQuizz Quizz;

    if (OperationType == enOperationType::MixOp)
    {
        OperationType = GetRandomOperationType();
    }

    if (QuestionLevel == enQuestionLevel::Mix)
    {
        QuestionLevel = (enQuestionLevel)RandomNumber(1, 3);
    }

    //Quizz.OpType=OperationType;
    Question.OperationType = OperationType;

    switch (QuestionLevel)
    {
    case enQuestionLevel::Easy:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        Question.QuestionLevel = QuestionLevel;
        Question.CorrectAnswer = simpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        return Question;

    case enQuestionLevel::Med:
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);
        Question.QuestionLevel = QuestionLevel;
        Question.CorrectAnswer = simpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        return Question;

    case enQuestionLevel::Hard:
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);
        Question.QuestionLevel = QuestionLevel;
        Question.CorrectAnswer = simpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
        return Question;
    }
    return Question;
}

void GenerateQuizzQuestion(stQuizz& Quizz)
{
    for (short Question = 0; Question < Quizz.NumberOfQuestion; Question++)
        Quizz.QuestionList[Question] = GenerateQuestion(Quizz.QuestionLevel, Quizz.OpType);
}

string GetOptypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Sub:
        return "-";
    case enOperationType::Mult:
        return "*";
    case enOperationType::Div:
        return "/";
    }
}

void PrintTheQuestion(stQuizz Quizz, short QuestionNumber)
{
    cout << "Question [ " << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestion << " ] : " << endl;
    cout << "\t" << Quizz.QuestionList[QuestionNumber].Number1 << endl;
    cout << "\t" << "\t" << GetOptypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << endl;
    cout << "\t" << Quizz.QuestionList[QuestionNumber].Number2 << endl;
    cout << "________________________" << endl;
}

int ReadQuestionAnswer()
{
    int QuestionAnswer = 0;
    cin >> QuestionAnswer;
    return QuestionAnswer;
}

void SetScreenColor(bool isPass)
{
    if (isPass)
        system("color 2F");
    else
        system("color 4F");
}

void CorrectTheQuestionAnswer(stQuizz& Quizz, short Question)
{
    if (Quizz.QuestionList[Question].PlayerAnswer != Quizz.QuestionList[Question].CorrectAnswer)
    {
        Quizz.QuestionList[Question].AnswerResualt = false;
        Quizz.NumberOfWrongAnswer++;
        cout << " Wrong Answer :-( " << endl;
        cout << " Right Answer is : " << Quizz.QuestionList[Question].CorrectAnswer << endl;
    }
    else {
        Quizz.QuestionList[Question].AnswerResualt = true;
        Quizz.NumberOfRightAnswer++;
        cout << " Right Answer :-) " << endl;
    }
    SetScreenColor(Quizz.QuestionList[Question].AnswerResualt);
}

void AskAndCorrectQuestionAnswer(stQuizz& Quizz)
{
    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestion; QuestionNumber++)
    {
        PrintTheQuestion(Quizz, QuestionNumber);
        Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectTheQuestionAnswer(Quizz, QuestionNumber);
        Quizz.isPass = (Quizz.NumberOfRightAnswer >= Quizz.NumberOfWrongAnswer);
    }
}

string GetFinallResualtText(bool isPass)
{
    if (isPass)
        return " Pass :-) ";
    else
        return " Fail :-( ";
}

string GetQuestionLevelText(short QuestionLevel)
{
    string ArrayQuestionLevelText[4] = { "EasyLevel ","MedLevel","HardLevel","Mix" };
    return ArrayQuestionLevelText[QuestionLevel - 1];
}

string GetOpTypeText(short OpType)
{
    string ArrayOpTypeText[5] = { "Add","Sub","Mult","Div","Mix" };
    return ArrayOpTypeText[OpType - 1];
}

void PrintQuizzResualt(stQuizz Quizz)
{
    cout << endl << "----------------------" << endl;
    cout << " Final Resualt " << GetFinallResualtText(Quizz.isPass) << endl;
    cout << "--------------------" << endl;
    cout << " Number of Questions : " << Quizz.NumberOfQuestion << endl;
    cout << " Question Level : " << GetQuestionLevelText(Quizz.QuestionLevel) << endl;
    cout << " Operation type: " << GetOpTypeText(Quizz.OpType) << endl;
    cout << " Number of Right Answers : " << Quizz.NumberOfRightAnswer << endl;
    cout << " Number of Wrong Answers : " << Quizz.NumberOfWrongAnswer << endl;
    cout << "------------------------" << endl << endl;
}

void PlayMathGame()
{
    stQuizz Quizz;
    Quizz.NumberOfQuestion = ReadHowManyQuestion();
    Quizz.QuestionLevel = ReadQuestionLevel();
    Quizz.OpType = ReadOperationType();
    GenerateQuizzQuestion(Quizz);
    AskAndCorrectQuestionAnswer(Quizz);
    PrintQuizzResualt(Quizz);
}

void ResetScreen()
{
    system("color 0F");
    system("cls");
}

void StartGame()
{
    char PlayAgain = 'n';
    do {
        ResetScreen();
        PlayMathGame();
        cout << " Do you want to play again Y/N ? ";
        cin >> PlayAgain;
    } while (PlayAgain != 'Y' || PlayAgain != 'y');
}

int main()
{
    StartGame();
    return 0;
}