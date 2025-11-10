@echo off
cls
echo Compiling DaysOfTheMonth...
g++ DaysOfTheMonth.cpp -o DaysOfTheMonth.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing DaysOfTheMonth...
DaysOfTheMonth.exe
pause