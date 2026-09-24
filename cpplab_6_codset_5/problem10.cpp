#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    virtual void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

class Teacher : public Person {
private:
    string subject;
    string department;

public:
    Teacher(string n, int a, string s, string d)
        : Person(n, a), subject(s), department(d) {}

    void display() const override {
        cout << "Teacher Record" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << department << endl;
    }
};

class ResearchScholar : public Person {
private:
    string researchTopic;
    string supervisor;

public:
    ResearchScholar(string n, int a, string topic, string sup)
        : Person(n, a), researchTopic(topic), supervisor(sup) {}

    void display() const  {
        cout << "Research Scholar Record" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Topic: " << researchTopic << endl;
        cout << "Supervisor: " << supervisor << endl;
    }
};

template <class T>
class RecordManager {
private:
    vector<T> records;

public:
    void addRecord(const T& record) {
        records.push_back(record);
    }

    void displayRecords() const {
        for (const T& record : records) {
            record.display();
            cout << "------------------------" << endl;
        }
    }
};

int main() {
    RecordManager<Teacher> teacherManager;

    teacherManager.addRecord(
        Teacher("Walter", 35, "Computer Science", "Engineering")
    );

    teacherManager.addRecord(
        Teacher("Hector", 40, "Mathematics", "Science")
    );

    RecordManager<ResearchScholar> scholarManager;

    scholarManager.addRecord(
        ResearchScholar("Reas", 26, "Artificial Intelligence", "Dr. Doom")
    );

    scholarManager.addRecord(
        ResearchScholar("Bulma", 24, "Quantum Computing", "Dr. Shubonki")
    );

    cout << "===== TEACHER RECORDS =====" << endl;
    teacherManager.displayRecords();

    cout << "\n===== RESEARCH SCHOLAR RECORDS =====" << endl;
    scholarManager.displayRecords();

    return 0;
}