// Q.4 Identify and correct the invalid variable names from this list: 1stPlayer, player_age, $score, total-marks, userName.<br><br><em><strong>Hint:</strong> Apply standard variable naming rules for your programming language.</em>

/*
❌ Invalid Variable Names &Corrections

--1stPlayer(Invalid)

     Why : A variable name cannot start with a digit.It must begin with a letter or an underscore(_).
     Correction : firstPlayer or player_1st

--$score(Invalid)

    Why : Special characters like $ are not allowed in variable names(only letters, digits, and underscores are permitted).
    Correction : score or _score

--total- marks(Invalid)

          Why : Hyphens(-) are not allowed because the compiler interprets them as subtraction operators.
          Correction : total_marks(snake_case) or totalMarks(camelCase)

Valid Variable Names
    --player_age(Valid)

        Why : It starts with a letter and uses an underscore to separate words,which is perfectly valid(snake_case).

    --userName(Valid)

        Why : It starts with a letter and contains only alphanumeric characters(camelCase).

*/