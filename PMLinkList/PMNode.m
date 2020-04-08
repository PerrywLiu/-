//
//  PMNode.m
//  PMLinkList
//
//  Created by LiuPW on 2020/4/8.
//  Copyright © 2020 LiuPW. All rights reserved.
//

#import "PMNode.h"

@implementation PMNode

- (instancetype)initWithElement:(id)element nextPtr:(PMNode*)next
{
    self = [super init];
    if (self) {
        self.value = element;
        self.next = next;
    }
    return self;
}

@end
