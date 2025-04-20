// Main function: Entry point of the program
int main() {
    // Variable declarations using multiple data types
    int age = 21;               // Integer variable to store age
    float height = 5.9;         // Float variable to store height in feet
    char grade = 'A';           // Character variable to store grade
    double gpa = 1.85;          // Double variable to store GPA with higher precision
    char name[] = "Mahendra";   // String (character array) to store name

    // Displaying values using default output function printf()
    printf("Student Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);
    printf("GPA: %.2lf\n", gpa);

    return 0;  // Indicates successful termination of the program
}

