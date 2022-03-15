#include "event.h"
#include <string.h>
#include <stdlib.h>

Event *CreateEvent(char *name)
{
    Event *event = malloc(sizeof(Event)*1);

    for(int i = 0; i<sizeof(event->eventName);i++)
    {
        event->eventName[i] = name[i];
    }
    
    event->next = event+1;

    return event;
}

void DestroyEvent(Event *this)
{
    free(this);
}
