#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int count_letter(string input);
int count_word(string input);
int count_sentence(string input);

int calculate_grade(int countLetter , int countWord , int countSentence);

int main(int argc, string argv[])
{
    string input = get_string("Text: ");

    int countLetter = count_letter(input);
    int countWord = count_word(input);
    int countSentence = count_sentence(input);

    int claculateGrade = calculate_grade(countLetter , countWord , countSentence);


    printf("%i letters\n", countLetter);
    printf("%i words\n", countWord);
    printf("%i sentencess\n", countSentence);

    if(claculateGrade > 16)
    {
        printf("Grade 16+\n");
    }
    else if(claculateGrade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", claculateGrade);
    }
}

// Count letter
int count_letter(string input)
{
    int letter_count = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            letter_count++;
        };
    };

    return letter_count;
}

// Count word
int count_word(string input)
{
    int word_count = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if (isspace(input[i]))
        {
            word_count++;
        };
    };

    return word_count + 1;
}

// Count sentence
int count_sentence(string input)
{
    int sentence_count = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if ((input[i] == '.') || (input[i] == '!') || (input[i] == '?'))
        {
            sentence_count++;
        };
    };

    return sentence_count;
}

// Calculate the grade
int calculate_grade(int countLetter , int countWord , int countSentence)
{
    float L = (countLetter / (float)countWord) * 100;
    float S = (countSentence / (float)countWord) * 100;

    float index = (0.0588 * L) - (0.296 * S) - 15.8;

    int grade = floor(index);

    return grade + 1;
}
