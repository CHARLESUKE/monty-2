#include "monty.h"

/**
* monty_add - func that add d first 2 elements of the stack
* @headboy: the pointer to the head pointer
* @countline: the line count
* Return: absolutely nothing (void)
*/
void monty_add(stack_t **headboy, unsigned int countline)
{
	stack_t *ptr;
	int tmp;
	int lenth = 0;

	ptr = *headboy;
	while (ptr)
	{
		ptr = ptr->next;
		lenth++;
	}
	if (lenth < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	ptr = *headboy;
	tmp = ptr->n + ptr->next->n;
	ptr->next->n = tmp;
	*headboy = ptr->next;
	free(ptr);
}


/**
* monty_sub - a function dat minuses d top elements of the stack
* from the second top element of the stack
* @headboy: the pointer variable to head pointer
* @countline: the line count variable
* Return: absolutely nothing(void)
*/
void monty_sub(stack_t **headboy, unsigned int countline)
{
	stack_t *tmp;
	int nume;
	int snub;

	tmp = *headboy;
	for (nume = 0; tmp != NULL; nume++)
		tmp = tmp->next;
	if (nume < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	tmp = *headboy;
	snub = tmp->next->n - tmp->n;
	tmp->next->n = snub;
	*headboy = tmp->next;
	free(tmp);
}


/**
* monty_div - the func dat divides d top two elemen of
* the stack
* @headboy: the double head pointer 2 stack
* @countline: the line count variable
* Return: absolutely nothing
*/
void monty_div(stack_t **headboy, unsigned int countline)
{
	stack_t *ptr;
	int tmp;
	int lenth = 0;

	ptr = *headboy;
	while (ptr)
	{
		ptr = ptr->next;
		lenth++;
	}
	if (lenth < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	ptr = *headboy;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	tmp = ptr->next->n / ptr->n;
	ptr->next->n = tmp;
	*headboy = ptr->next;
	free(ptr);
}


/**
* monty_mul - this is a  funct dat multiplies d top two elements of
* the stack
* @headboy: this is the double head pointer 2 d stack
* @countline: this is the line count variable
* Return: absolutly nothing (void)
*/
void monty_mul(stack_t **headboy, unsigned int countline)
{
	stack_t *ptr;
	int tmp;
	int lenth = 0;

	ptr = *headboy;
	while (ptr)
	{
		ptr = ptr->next;
		lenth++;
	}
	if (lenth < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	ptr = *headboy;
	tmp = ptr->next->n * ptr->n;
	ptr->next->n = tmp;
	*headboy = ptr->next;
	free(ptr);
}


/**
* monty_mod - this is d func dat computes d remainder of d division
* of d 2nd top eleme of d stack by the top element of the stack
* @headboy: this is the double head pointer to the stack
* @countline: this is the line count variable
* Return: absolutely nothing (void)
*/
void monty_mod(stack_t **headboy, unsigned int countline)
{
	stack_t *ptr;
	int tmp;
	int lenth = 0;

	ptr = *headboy;
	while (ptr)
	{
		ptr = ptr->next;
		lenth++;
	}
	if (lenth < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	ptr = *headboy;
	if (ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countline);
		fclose(func.file);
		free(func.content);
		free_function(*headboy);
		exit(EXIT_FAILURE);
	}
	tmp = ptr->next->n % ptr->n;
	ptr->next->n = tmp;
	*headboy = ptr->next;
	free(ptr);
}
