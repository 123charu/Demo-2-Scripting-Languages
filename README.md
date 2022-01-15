In relation to ONLINE Scripting languages Mid-Semester Practical Examination of Jan 2022 the following is to be noted:

Firstly, you need to fork this repository so that you can push the changes to your repository and then finally create a pull request to it.

NOTE - Don't forget to FORK the repository, otherwise, you will not be able to push the code and make pull requests.

You need to create a new folder inside the directory of your section.

Your directory should have following format - ClassRollNo_UniversityRoll_No_FirstName_Last_Name.

Question 1: create a student registration form with username, password, DOB, email.
<!DOCTYPE html>
<html>
  <head>
    <title>Coder_UK_07</title>
  </head>
  <body>
    <form action="Scripting_4b.html">
      <fieldset>
        <legend>Student Registration</legend>
        <br />
        <label for="fname">Uder Id:</label>
        <input
          type="text"
          required
          placeholder="Enter your user id"
          id="fname"
          name="fname"
        /><br /><br />
        <label for="pass">Password:</label>
        <input
          type="password"
          placeholder="Enter your password"
          id="pass"
          name="pass"
        /><br /><br />
        <label for="mail">E-Mail:</label>
        <input
          type="email"
          id="mail"
          placeholder="example@domain.com"
          name="mail"
        /><br />
        <br />
        <label for="dob">DOB:</label>
        <input type="date" id="dob" /><br /><br />
        <button type="Login" value="Login">Login</button>
        <br /><br />
      </fieldset>
    </form>
  </body>
</html>

Question 2: Explain the use of external CSS.
The external style sheet is generally used when you want to make changes on multiple pages. It is ideal for this condition because it facilitates you to change the look of the entire web site by changing just one file. It uses the <link> tag on every pages and the <link> tag should be put inside the head section.
