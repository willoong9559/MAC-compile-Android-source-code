//	
//	CalEvent.h
//	Calendar Store Framework
//	
//  Copyright 2006 Apple Inc. All rights reserved.
//	
//  This class allows the client to access data about a specific CalTask.
//
//  The Calendar Store framework is deprecated.  Please use the Event Kit framework instead.

#import <CalendarStore/CalCalendarItem.h>

@class CalRecurrenceRule;

@interface CalEvent : CalCalendarItem {
    @private
    BOOL _isAllDay;
    NSString *_location;
    CalRecurrenceRule *_recurrenceRule;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_attendees;
    BOOL _isDetached;
    NSDate *_occurrence;
}

//  The calendar property must be set before calling saveEvent on a new event
+ (id)event NS_DEPRECATED_MAC(10_5, 10_8);

@property BOOL isAllDay NS_DEPRECATED_MAC(10_5, 10_8);
@property(copy) NSString *location NS_DEPRECATED_MAC(10_5, 10_8);
@property(copy) CalRecurrenceRule *recurrenceRule NS_DEPRECATED_MAC(10_5, 10_8);

//  The client is responsible for making sure they never attempt to save an event with a start date that occurs after
//  the endDate, or an endDate that occurs before the startDate. Calling saveEvent: on an improperly configured event
//  will fail.
@property(copy) NSDate *startDate NS_DEPRECATED_MAC(10_5, 10_8);
@property(copy) NSDate *endDate NS_DEPRECATED_MAC(10_5, 10_8);

@property(copy, readonly) NSArray *attendees NS_DEPRECATED_MAC(10_5, 10_8);       //  It is not possible to modify an event's attendees

//  These properties are only meaningful for CalEvents which are instances of a repeating event.

//  @property(ivar, readonly) (BOOL)isDetached;
//  If this CalEvent is an instance of a repeating event, and an attribute of this CalEvent has been changed to from the
//  default value generated by the repeating event, isDetached will return YES. If the CalEvent is unchanged from its 
//  default state, or is not a repeating event, isDetached returns NO.

@property(readonly) BOOL isDetached NS_DEPRECATED_MAC(10_5, 10_8);

//  @property(ivar, readonly) (NSDate *)occurrence;
//  Returns the occurrence date of a CalEvent. Since all instances of a repeating event have the same UID, we need 
//  another way to differentiate between those CalEvents. This method returns the NSDate on which this event was 
//  originally scheduled to occur. This value will remain the same even if the event has been detached and its start 
//  date has changed. For CalEvents not part of a repeating pattern, this method will return the same value as startDate.

@property(copy, readonly, nonatomic) NSDate *occurrence NS_DEPRECATED_MAC(10_5, 10_8);

@end


