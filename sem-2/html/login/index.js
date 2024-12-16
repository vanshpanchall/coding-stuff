let user_array = [
  {
    username: "Kushagra",
    password: "kushagra",
  },
  {
    username: "Amit",
    password: "amit_123",
  },
  {
    username: "Ram",
    password: "Ram@123",
  },
];

function login() {
  const username = document.getElementById("username").value;
  const password = document.getElementById("password").value;
  let user = 0;
  user_array.forEach((val) => {
    if (val.username === username && val.password === password) {
      console.log(val.username + " Is log in");
      user = 1;
    }
  });
  if (user === 0) {
    console.log("User not found");
    user = 0;
  }
}
