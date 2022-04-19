var isPalindrome = function (x) {
  var s = x.toString().split(""),
    i = -1,
    j = s.length,
    res = 0;

  while (s[++i]) {
    --j;
    
    if (s[i] == s[--j]) {
      console.log(1);
    }
  }

  //
};
isPalindrome(121);
