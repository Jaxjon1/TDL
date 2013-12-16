//
//  ToDoItem.h
//  ToDoList
//
//  Created by jon wright on 12/16/13.
//  Copyright (c) 2013 jon wright. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
