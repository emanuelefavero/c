#include <stdio.h>
#include <string.h>

// struct
// it allows to create custom related data structure
// similar to Javascript Class inside arrays, JS CODE:
// class Person {
//     constructor(name, number) {
//         this.name = name;
//         this.number = number;
//     }
// }
// let people = [
//     new Person("Brian", "+1-222-495-2000"),
//     new Person("David", "+1-252-468-9050")
// ];
// console.log(people[0].name);

typedef struct
{
    char *name;
    char *number;
} person;

int main(void)
{

    person people[2];

    people[0].name = "Brian";
    people[0].number = "+1-222-495-2000";
    people[1].name = "David";
    people[1].number = "+1-252-468-9050";

    char person_to_find[10] = "David";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, person_to_find) == 0)
        {
            printf("found %s's number: %s \n", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("%s not found \n", person_to_find);
    return 1;
}
