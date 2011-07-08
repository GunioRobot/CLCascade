//
//  CLSegmentedView.h
//  Cascade
//
//  Created by Emil Wojtaszek on 11-04-24.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "CLCascadeEnums.h"

@interface CLSegmentedView : UIView {
    UIView* _headerView;
    UIView* _footerView;
    UIView* _contentView;

    CAGradientLayer* _shadow;
    CGFloat _shadowWidth;
    
    CLViewSize _viewSize;
}

/*
 * Header view - located on the top of view
 */
@property (nonatomic, retain, readonly) IBOutlet UIView* headerView;

/*
 * Footer view - located on the bottom of view
 */
@property (nonatomic, retain, readonly) IBOutlet UIView* footerView;

/*
 * Content view - located between header and footer view 
 */
@property (nonatomic, retain, readonly) IBOutlet UIView* contentView;

/*
 * Shadow on the left side of the view
 */
@property (nonatomic, retain) CAGradientLayer* shadow;

/*
 * The width of the shadow
 */
@property (nonatomic, assign) CGFloat shadowWidth;

/*
 * Style of view
 */
@property (nonatomic, assign, readonly) CLViewSize viewSize;

- (id) initWithSize:(CLViewSize)size;

/* 
 * To set content view.
 * This methoad add contentView to view and layout all views
 */
- (void) setContentView:(UIView*)contentView;

/* 
 * If you want set header view (above contentView).
 * This methoad add headerView to view and layout all views
 */
- (void) setHeaderView:(UIView*)headerView;

/* 
 * If you want set footer view (belove contentView)
 * This methoad add footerView to view and layout all views
 */
- (void) setFooterView:(UIView*)footerView;

/* 
 * This methoad add left outer shadow
 */
- (void) setShadow:(CAGradientLayer*)shadow withWidth:(CGFloat)with;

@end
