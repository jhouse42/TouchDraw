//
//  RLine.h
//  TouchDraw
//
//  Created by Jeanie House on 10/15/14.
//  Copyright (c) 2014 Jeanie House. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h> 

@interface RLine : UIView
@property (weak, nonatomic) IBOutlet UILabel *distanceLabel;

@property (nonatomic) CGFloat length;
@property (nonatomic) CGPoint begin;
@property (nonatomic) CGPoint end;

@end
