<!DOCTYPE html>
   <html>
      <head>
            <title> Registration Form </title>
      </head>
      <body>
         <h2>Registration Form</h2>
         <form action="/register">
            <fieldset>
            <legend>Personal Information</legend>
            <label for="firstname">First name :</label>
            <input type="text" id="firstname" name="firstname">
            <br/><br/>
            <label for="lastname">Last name :</label>
            <input type="text" id="lastname" name="lastname">
            <br/><br/>
            <label for="email">Email :</label>
            <input type="email" id="email" name="email">
        </fieldset>
        <br/><br/>
        <fieldset>
            <legend>Education Qualification</legend>
            <label for="hdegree">Highest Degree :</label>
            <input type="text" id="hdegree" name="hdegree">
            <br/><br/>
            <label for="Collegename">College name :</label>
            <input type="text" id="Collegename" name="Collegename">
            <br/><br/>
            <label for="University">University :</label>
            <input type="text" id="University" name="University">
            <br/><br/>
        </fieldset>
        <br/><br/>
        <input type="submit" value="Submit">

         </form>
      </body>
</html>
