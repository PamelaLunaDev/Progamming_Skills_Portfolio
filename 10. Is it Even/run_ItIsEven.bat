@echo off
cls
echo Compiling ItIsEven...
g++ ItIsEven.cpp -o ItIsEven.exe
if %errorlevel% neq 0 (
	echo.
	echo Compilation failed!
	pause
	exit /b
)
echo Runing ItIsEven...
ItIsEven.exe
pause