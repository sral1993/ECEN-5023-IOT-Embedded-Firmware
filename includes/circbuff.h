/*
 * circbuff.h
   Author: Srivishnu Alvakonda
 */
#ifndef CIRCBUFF_H
#define CIRCBUFF_H
#include<stdint.h>
#include<stdbool.h>

struct node
{
	uint8_t data;
	struct node *next_data;
};

/*Defining a structure called circular_buffer which is used to define all the characteristics necessary to define a circular buffer and showcase its state*/

struct circular_buffer
{
	struct node *buffer_start;
	struct node *buffer_end;
	struct node *head;
	struct node *tail;
	uint32_t current_length;
	uint32_t max_length;
};


void circ_buff_initialize(struct circular_buffer *buffer1, uint32_t max_length);
void circ_buff_destroy(struct circular_buffer *buffer);
/*Declaring a function buffer_full which is used to check whether the circular buffer is full or not*/
int buffer_full(struct circular_buffer *buffer1);
/*Declaring a function buffer_empty which is used to check whether the circular buffer is empty or not*/
int buffer_empty(struct circular_buffer *buffer1);
/*Declaring a function add_item which adds an item to the circular buffer i.e. the buffer whose address is being sent as the argument*/
void add_item(struct circular_buffer *buffer1, uint8_t item);
/*Declaring a function remove_item which removes an item from the circular buffer i.e. the buffer whose address is being sent as the argument*/
uint8_t remove_item(struct circular_buffer *buffer1);

/*Defining a structure called node which is used to store the individual elements of the circular buffer. That is each element of the buffer has
 a data field as well as the adress of the next element*/

/*Declaring an enumeration which is used to state of the circular buffer*/

typedef enum
{
bufferempty=0,
buffernotempty=1
}buffer_state;
#endif
