//
//  DrawViewController.m
//  TouchDraw
//
//  Created by Jeanie House on 10/15/14.
//  Copyright (c) 2014 Jeanie House. All rights reserved.
//

#import "DrawViewController.h"
#import "DrawView.h"



@implementation DrawViewController

- (void)loadView
{
    self.view = [[DrawView alloc] initWithFrame:CGRectZero];
}

@end
