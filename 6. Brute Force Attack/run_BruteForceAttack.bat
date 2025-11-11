@echo off
cls
echo Compiling BruteForceAttack...
g++ BruteForceAttack.cpp -o BruteForceAttack.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing BruteForceAttack...
BruteForceAttack.exe
pause