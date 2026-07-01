#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int *marks;
    int n;

    public:
    Student(string name, int marks[], int n)
    {
        this->name = name;
        this->n = n;

        this->marks = new int[n];
        for (int i = 0; i < n; i++)
        {
            this->marks[i] = marks[i];
        }
    }

    double calculateAverage()
    {
        if (n == 0)
            return 0.0;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += marks[i];
        }

        return (double)sum / n;
    }
};

int main(){
    string name;
    int n;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"NO of subjects:";
    cin>>n;
    
    int marks[n];

    cout<<"Enter marks of "<<n<<" subjects:"<<endl;
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }

    Student s(name, marks, n);

    cout << "Average Marks = " << s.calculateAverage();

}