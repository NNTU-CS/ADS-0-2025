function chechPrime(value){
    for (let i = 2; i < value; i++) {
        if (value % i === 0){
            return false
        }
      }
      return value!==1
}

// chechPrime(2) 1 задание
