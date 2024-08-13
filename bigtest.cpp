
#include <cstdio>

static void versionSwitch(benchmark::State& state) 
{
 
  srand(0);

  for (auto _ : state) 
  {
    unsigned int result = 0;
    
    for(unsigned int i=5; i<500000; i++)
    {
      int nr = rand()%102;

      while((nr >= 12 && nr <= 16)|| (nr >= 26 && nr <= 28)|| (nr >= 34 && nr <= 39)||
      (nr >= 41 && nr <= 49))
      {
        nr = rand()%102;
      }

     	switch (nr)
	{
	case 0: { result += 3; } break;
	case 1: { result = result ^ 0b101; } break;
	case 2: { result = (result + 10) / 3; } break;
	case 3: { result = result / 5; result += 2; } break;
	case 4: { result += rand() % 100; } break;
	case 5: { result *= 2; } break;
	case 6: { result  += 8;  result += rand() % 100; } break;
	case 7: { result *= 2; } break;
	case 8: { result += 21;  result += rand() % 100; } break;
	case 9: { result = ~result; } break;
	case 10: { result += rand()%10; } break;
	case 11: { result += rand()%10; } break;
	case 17: { result += 425; } break;
	case 18: { result += 425; } break;
	case 19: { result += 425; } break;
	case 20:{ result += 425; } break;
			
	case 21: { result += 111; } break;
	case 22: { result /= 17; } break;
	case 23: { result += rand() % 10; } break;
	case 24: { result += rand() % 10; } break;
	case 25: { result += rand() % 33; } break;
	case 29: { result *= 2; result += 1; } break;
	case 30: { result -= 10; } break;
	case 31: { result = ~result; } break;
	case 32: { result += 1; i -= 1; } break;
	case 33: { result += 2; i -= 1; } break;
	case 40: { result += rand() % 100; } break;

	case 92: {result += rand()%17; result += rand()%100; result /= 3; result *= 3; result -= rand()%117; result += 47; result ^= rand(); result += 5; result = result / 11; result += 3; result *= 7; } break;
case 68: {result *= 7; result += 4; result += 5; } break;
case 93: {result += rand()%100; result *= 3; result ^= rand(); result = result / 11; result += 3; result += 8; result *= 7; result /= 3; result += 5; result += rand()%17; result -= rand()%117; result += 4; } break;
case 83: {result += 4; result *= 7; } break;
case 95: {result = result / 11; result += 3; result += 4; result /= 3; result -= rand()%117; result += rand()%17; result += 47; result += 8; result *= 3; result += 5; result *= 7; } break;
case 60: {result += 4; result += 8; result *= 7; result /= 3; result *= 3; result = result / 11; result += 3; } break;
case 59: {result += 8; result += 47; result ^= rand(); result -= rand()%117; } break;
case 67: {result /= 3; result += 4; result = result / 11; result += 3; result += 5; result *= 3; result += rand()%17; } break;
case 77: {result += 5; result *= 7; result *= 3; result ^= rand(); result = result / 11; result += 3; result /= 3; result += 47; result -= rand()%117; result += rand()%100; } break;
case 96: {result ^= rand(); result /= 3; result *= 3; } break;
case 98: {result += rand()%17; result += 5; result /= 3; result += rand()%100; } break;
case 76: {result += 47; } break;
case 70: {result += 5; result /= 3; result -= rand()%117; result ^= rand(); result += 47; result *= 7; result += rand()%17; } break;
case 82: {result += 5; result += 8; result += 4; result += rand()%17; result *= 7; result += 47; result -= rand()%117; result ^= rand(); result += rand()%100; result = result / 11; result += 3; result *= 3; } break;
case 71: {result += rand()%17; result *= 7; result += 47; result += 8; result += rand()%100; result += 4; result /= 3; result ^= rand(); result += 5; } break;
case 99: {result += 4; result += 5; result += 8; result += rand()%17; result += 47; result += rand()%100; result /= 3; result -= rand()%117; result ^= rand(); result *= 7; result *= 3; result = result / 11; result += 3; } break;
case 65: {result += 4; result *= 3; result += 5; result ^= rand(); result += 47; result += rand()%100; result = result / 11; result += 3; result *= 7; result /= 3; result += rand()%17; result += 8; result -= rand()%117; } break;
case 61: {result += 5; result -= rand()%117; result /= 3; result += rand()%17; result ^= rand(); result *= 3; result += rand()%100; result += 4; } break;
case 64: {result += 4; result += 47; result += rand()%17; result -= rand()%117; result += rand()%100; result /= 3; result ^= rand(); result += 5; result *= 3; result += 8; result = result / 11; result += 3; result *= 7; } break;
case 78: {result = result / 11; result += 3; result += 8; result ^= rand(); result *= 3; result /= 3; result -= rand()%117; result += 47; result += 4; result += rand()%17; result += 5; } break;
case 51: {result += rand()%100; result += 4; result *= 7; result += 8; } break;
case 66: {result /= 3; result += 47; result += 8; } break;
case 58: {result /= 3; result += 4; result += 8; result -= rand()%117; result += rand()%100; result = result / 11; result += 3; } break;
case 75: {result += 4; result ^= rand(); result /= 3; result += rand()%17; result += 47; result = result / 11; result += 3; result *= 7; result += 5; } break;
case 91: {result += 47; result *= 7; result -= rand()%117; result *= 3; result += rand()%100; result ^= rand(); result += rand()%17; result /= 3; result += 5; result += 8; result = result / 11; result += 3; result += 4; } break;
case 72: {result += rand()%100; result -= rand()%117; result += rand()%17; result /= 3; result += 47; result += 8; result ^= rand(); result *= 3; result = result / 11; result += 3; result *= 7; result += 5; } break;
case 81: {result ^= rand(); result += 4; result *= 7; result += 47; result = result / 11; result += 3; result *= 3; result += rand()%17; result += 5; result /= 3; result += rand()%100; result -= rand()%117; } break;
case 57: {result += 4; result = result / 11; result += 3; result += 5; result ^= rand(); result += 47; result += rand()%100; result *= 3; result += 8; result /= 3; } break;
case 94: {result /= 3; result ^= rand(); result = result / 11; result += 3; result += rand()%100; result *= 3; } break;
case 89: {result += 4; result -= rand()%117; } break;
case 80: {result += 4; result += rand()%17; result /= 3; result = result / 11; result += 3; result += 8; result += 5; result ^= rand(); result += rand()%100; result -= rand()%117; result += 47; } break;
case 84: {result += 4; result = result / 11; result += 3; result += 8; } break;
case 85: {result -= rand()%117; result = result / 11; result += 3; result *= 7; result += 8; result /= 3; result += 5; } break;
case 90: {result += 5; result /= 3; result *= 7; result += 8; result -= rand()%117; result *= 3; } break;
case 86: {result /= 3; result += 47; result += 5; result += 8; } break;
case 50: {result *= 3; result = result / 11; result += 3; result += 5; result += 47; } break;
case 69: {result *= 3; result += rand()%100; result /= 3; result += 47; result += 4; result += 8; result *= 7; result = result / 11; result += 3; } break;
case 62: {result /= 3; result *= 7; result = result / 11; result += 3; result += 4; result -= rand()%117; result += rand()%17; result += rand()%100; result += 8; result *= 3; result += 47; result += 5; } break;
case 55: {result = result / 11; result += 3; result += 5; result *= 7; result += 4; result -= rand()%117; result += 8; result += rand()%17; result += 47; result *= 3; result /= 3; } break;
case 79: {result /= 3; result += rand()%17; result += rand()%100; result += 5; result ^= rand(); result *= 3; result -= rand()%117; result += 47; result = result / 11; result += 3; result *= 7; } break;
case 56: {result *= 7; result ^= rand(); result = result / 11; result += 3; result *= 3; result += 4; result += 5; result += 47; result /= 3; } break;
case 87: {result += 47; result += rand()%100; } break;
case 73: {result ^= rand(); result += rand()%17; result += 5; result += 8; } break;
case 74: {result += 47; } break;
case 52: {result -= rand()%117; result *= 3; result *= 7; result = result / 11; result += 3; result += 5; result += 8; result += rand()%100; result += 4; result += rand()%17; result += 47; result ^= rand(); } break;
case 88: {result += 47; result += 8; result = result / 11; result += 3; } break;
case 53: {result += 5; result *= 7; result += 4; } break;
case 54: {result -= rand()%117; result /= 3; result *= 7; result += 5; result = result / 11; result += 3; } break;
case 63: {result += 4; result /= 3; result *= 3; result ^= rand(); result += 5; result *= 7; result -= rand()%117; result = result / 11; result += 3; result += 8; } break;
case 97: {result += rand()%17; result += 47; result += rand()%100; result *= 3; result += 5; result += 4; result ^= rand(); result += 8; result *= 7; } break;


	default : {result += rand() + 10;}break;
	}

    }

    benchmark::DoNotOptimize(result);
  }
}
// Register the function as a benchmark


static void versionIfs(benchmark::State& state) 
{

   srand(0);

  for (auto _ : state) 
  {
    unsigned int result = 0;
    
    for(unsigned int i=5; i<500000; i++)
    {
       int nr = rand()%102;

      while((nr >= 12 && nr <= 16)|| (nr >= 26 && nr <= 28)|| (nr >= 34 && nr <= 39)||
      (nr >= 41 && nr <= 49))
      {
        nr = rand()%102;
      }

   	if(nr == 0){ result += 3; } else
	if(nr == 1) { result = result ^ 0b101; } else
	if(nr == 2) { result = (result + 10) / 3; } else
	if(nr == 3) { result = result / 5; result += 2; } else
	if(nr == 4) { result += rand() % 100; } else
	if(nr == 5) { result *= 2; } else
	if(nr == 6) { result += 8;  result += rand() % 100; } else
	if(nr == 7) { result *= 2; } else
	if(nr == 8) { result += 21;  result += rand() % 100; } else
	if(nr == 9) { result = ~result; } else
	if(nr == 10) { result += rand() % 10; } else
	if(nr == 11) { result += rand() % 10; } else
	if(nr == 17 ) { result += 425; } else
	if(nr == 18 ) { result += 425; } else
	if(nr == 19 ) { result += 425; } else
	if(nr == 20 ) { result += 425; } else
	if(nr == 21) { result += 111; } else
	if(nr == 22) { result /= 17; } else
	if(nr == 23) { result += rand() % 10; } else
	if(nr == 24) { result += rand() % 10; } else
	if(nr == 25) { result += rand() % 33; } else
	if(nr == 29) { result *= 2; result += 1; } else
	if(nr == 30) { result -= 10; } 	else
	if(nr == 31) { result = ~result; } else
	if(nr == 32) { result += 1; i -= 1; } else
	if(nr == 33) { result += 2; i -= 1; } else
	if(nr == 40) { result += rand() % 100; } else

if(nr == 92) {result += rand()%17; result += rand()%100; result /= 3; result *= 3; result -= rand()%117; result += 47; result ^= rand(); result += 5; result = result / 11; result += 3; result *= 7; } else
if(nr == 68) {result *= 7; result += 4; result += 5; } else
if(nr == 93) {result += rand()%100; result *= 3; result ^= rand(); result = result / 11; result += 3; result += 8; result *= 7; result /= 3; result += 5; result += rand()%17; result -= rand()%117; result += 4; } else
if(nr == 83) {result += 4; result *= 7; } else
if(nr == 95) {result = result / 11; result += 3; result += 4; result /= 3; result -= rand()%117; result += rand()%17; result += 47; result += 8; result *= 3; result += 5; result *= 7; } else
if(nr == 60) {result += 4; result += 8; result *= 7; result /= 3; result *= 3; result = result / 11; result += 3; } else
if(nr == 59) {result += 8; result += 47; result ^= rand(); result -= rand()%117; } else
if(nr == 67) {result /= 3; result += 4; result = result / 11; result += 3; result += 5; result *= 3; result += rand()%17; } else
if(nr == 77) {result += 5; result *= 7; result *= 3; result ^= rand(); result = result / 11; result += 3; result /= 3; result += 47; result -= rand()%117; result += rand()%100; } else
if(nr == 96) {result ^= rand(); result /= 3; result *= 3; } else
if(nr == 98) {result += rand()%17; result += 5; result /= 3; result += rand()%100; } else
if(nr == 76) {result += 47; } else
if(nr == 70) {result += 5; result /= 3; result -= rand()%117; result ^= rand(); result += 47; result *= 7; result += rand()%17; } else
if(nr == 82) {result += 5; result += 8; result += 4; result += rand()%17; result *= 7; result += 47; result -= rand()%117; result ^= rand(); result += rand()%100; result = result / 11; result += 3; result *= 3; } else
if(nr == 71) {result += rand()%17; result *= 7; result += 47; result += 8; result += rand()%100; result += 4; result /= 3; result ^= rand(); result += 5; } else
if(nr == 99) {result += 4; result += 5; result += 8; result += rand()%17; result += 47; result += rand()%100; result /= 3; result -= rand()%117; result ^= rand(); result *= 7; result *= 3; result = result / 11; result += 3; } else
if(nr == 65) {result += 4; result *= 3; result += 5; result ^= rand(); result += 47; result += rand()%100; result = result / 11; result += 3; result *= 7; result /= 3; result += rand()%17; result += 8; result -= rand()%117; } else
if(nr == 61) {result += 5; result -= rand()%117; result /= 3; result += rand()%17; result ^= rand(); result *= 3; result += rand()%100; result += 4; } else
if(nr == 64) {result += 4; result += 47; result += rand()%17; result -= rand()%117; result += rand()%100; result /= 3; result ^= rand(); result += 5; result *= 3; result += 8; result = result / 11; result += 3; result *= 7; } else
if(nr == 78) {result = result / 11; result += 3; result += 8; result ^= rand(); result *= 3; result /= 3; result -= rand()%117; result += 47; result += 4; result += rand()%17; result += 5; } else
if(nr == 51) {result += rand()%100; result += 4; result *= 7; result += 8; } else
if(nr == 66) {result /= 3; result += 47; result += 8; } else
if(nr == 58) {result /= 3; result += 4; result += 8; result -= rand()%117; result += rand()%100; result = result / 11; result += 3; } else
if(nr == 75) {result += 4; result ^= rand(); result /= 3; result += rand()%17; result += 47; result = result / 11; result += 3; result *= 7; result += 5; } else
if(nr == 91) {result += 47; result *= 7; result -= rand()%117; result *= 3; result += rand()%100; result ^= rand(); result += rand()%17; result /= 3; result += 5; result += 8; result = result / 11; result += 3; result += 4; } else
if(nr == 72) {result += rand()%100; result -= rand()%117; result += rand()%17; result /= 3; result += 47; result += 8; result ^= rand(); result *= 3; result = result / 11; result += 3; result *= 7; result += 5; } else
if(nr == 81) {result ^= rand(); result += 4; result *= 7; result += 47; result = result / 11; result += 3; result *= 3; result += rand()%17; result += 5; result /= 3; result += rand()%100; result -= rand()%117; } else
if(nr == 57) {result += 4; result = result / 11; result += 3; result += 5; result ^= rand(); result += 47; result += rand()%100; result *= 3; result += 8; result /= 3; } else
if(nr == 94) {result /= 3; result ^= rand(); result = result / 11; result += 3; result += rand()%100; result *= 3; } else
if(nr == 89) {result += 4; result -= rand()%117; } else
if(nr == 80) {result += 4; result += rand()%17; result /= 3; result = result / 11; result += 3; result += 8; result += 5; result ^= rand(); result += rand()%100; result -= rand()%117; result += 47; } else
if(nr == 84) {result += 4; result = result / 11; result += 3; result += 8; } else
if(nr == 85) {result -= rand()%117; result = result / 11; result += 3; result *= 7; result += 8; result /= 3; result += 5; } else
if(nr == 90) {result += 5; result /= 3; result *= 7; result += 8; result -= rand()%117; result *= 3; } else
if(nr == 86) {result /= 3; result += 47; result += 5; result += 8; } else
if(nr == 50) {result *= 3; result = result / 11; result += 3; result += 5; result += 47; } else
if(nr == 69) {result *= 3; result += rand()%100; result /= 3; result += 47; result += 4; result += 8; result *= 7; result = result / 11; result += 3; } else
if(nr == 62) {result /= 3; result *= 7; result = result / 11; result += 3; result += 4; result -= rand()%117; result += rand()%17; result += rand()%100; result += 8; result *= 3; result += 47; result += 5; } else
if(nr == 55) {result = result / 11; result += 3; result += 5; result *= 7; result += 4; result -= rand()%117; result += 8; result += rand()%17; result += 47; result *= 3; result /= 3; } else
if(nr == 79) {result /= 3; result += rand()%17; result += rand()%100; result += 5; result ^= rand(); result *= 3; result -= rand()%117; result += 47; result = result / 11; result += 3; result *= 7; } else
if(nr == 56) {result *= 7; result ^= rand(); result = result / 11; result += 3; result *= 3; result += 4; result += 5; result += 47; result /= 3; } else
if(nr == 87) {result += 47; result += rand()%100; } else
if(nr == 73) {result ^= rand(); result += rand()%17; result += 5; result += 8; } else
if(nr == 74) {result += 47; } else
if(nr == 52) {result -= rand()%117; result *= 3; result *= 7; result = result / 11; result += 3; result += 5; result += 8; result += rand()%100; result += 4; result += rand()%17; result += 47; result ^= rand(); } else
if(nr == 88) {result += 47; result += 8; result = result / 11; result += 3; } else
if(nr == 53) {result += 5; result *= 7; result += 4; } else
if(nr == 54) {result -= rand()%117; result /= 3; result *= 7; result += 5; result = result / 11; result += 3; } else
if(nr == 63) {result += 4; result /= 3; result *= 3; result ^= rand(); result += 5; result *= 7; result -= rand()%117; result = result / 11; result += 3; result += 8; } else
if(nr == 97) {result += rand()%17; result += 47; result += rand()%100; result *= 3; result += 5; result += 4; result ^= rand(); result += 8; result *= 7; } else



	{result += rand() + 10;}

    }

    benchmark::DoNotOptimize(result);
  }

}

BENCHMARK(versionSwitch);
BENCHMARK(versionIfs);

