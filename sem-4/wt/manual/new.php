<!-- Fetch.php: -->
<?php
// Database connection
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "database";
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}
// Fetch operation
$sql = "SELECT * FROM employees";
$result = $conn->query($sql);
if ($result->num_rows > 0) {
while($row = $result->fetch_assoc()) {
echo "Name: " . $row["name"]. " - Email: " . $row["email"]. "
- Designation: " . $row["designation"]. " - Salary: " .
$row["salary"]. " <button onclick='fillForm(".$row['id'].",
\"".$row['name']."\", \"".$row['email']."\",
\"".$row['designation']."\", ".$row['salary'].")'>Edit</button><br>";
}
} else {
echo "0 results";
}
$conn->close();
?>
<!-- // Process.php: -->
<?php
// Database connection
$servername = "localhost";
$username = "username";
$password = "password";
$dbname = "database";
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}
// Insert operation
if ($_SERVER["REQUEST_METHOD"] == "POST") {
if (!empty($_POST["employeeId"])) {
$id = $_POST["employeeId"];
$name = $_POST["name"];
$email = $_POST["email"];
$designation = $_POST["designation"];
$salary = $_POST["salary"];
$sql = "UPDATE employees SET name='$name', email='$email',
designation='$designation', salary=$salary WHERE id=$id";
if ($conn->query($sql) === TRUE) {
echo "Record updated successfully";
} else {
echo "Error: " . $sql . "<br>" . $conn->error;
}
} else {
$name = $_POST["name"];
$email = $_POST["email"];
$designation = $_POST["designation"];
$salary = $_POST["salary"];
$sql = "INSERT INTO employees (name, email, designation,
salary) VALUES ('$name', '$email', '$designation', $salary)";
if ($conn->query($sql) === TRUE) {
echo "New record created successfully";
} else {
echo "Error: " . $sql . "<br>" . $conn->error;
}
}
}
$conn->close();
?>