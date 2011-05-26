//
//  CLCascadeNavigationController.h
//  Cascade
//
//  Created by Emil Wojtaszek on 11-05-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CLCascadeViewController.h"
#import "CLCascadeNavigationView.h"
#import "CLViewController.h"

@protocol CLCascadeNavigationControllerDelegate;

@interface CLCascadeNavigationController : UIViewController {

    CLCascadeViewController* _rootViewController;
    CLCascadeViewController* _lastCascadeViewController;
    
    NSMutableArray* _viewControllers;
}

- (void) setRootViewController:(CLViewController*)viewController animated:(BOOL)animated;

/* 
 First in hierarchy CascadeViewController (opposite to lastCascadeViewController)
 */
@property (nonatomic, retain, readonly) CLCascadeViewController* rootViewController;

/* 
 Last in hierarchy CascadeViewController (opposite to rootViewController)
 */
@property (nonatomic, retain, readwrite) CLCascadeViewController* lastCascadeViewController;

/*
 List of CLViewControllers on stock.
 */
@property (nonatomic, retain, readonly) NSMutableArray* viewControllers;

- (CGRect) cascadeScrollableViewFrame;
- (CGRect) cascadeContentNavigatorBounds;

- (CGSize) singleCascadeContentSize;
- (CGSize) doubleCascadeContentSize;

- (CGRect) masterCascadeFrame;
- (CGRect) detailCascadeFrame;

- (CGPoint) masterContentOffsetLeadToDetailView;
- (CGPoint) detailContentOffsetAtShow;

- (CGRect) frameRootViewController;
- (CGSize) contentSizeRootViewController;

- (void) addViewController:(CLViewController*)viewController;
- (void) removeViewController:(CLViewController*)viewController;
- (void) removeViewControllersStartingFrom:(CLViewController*)viewController;

- (void) adjustFrameAndContentAfterRotation;

@end

//@protocol CLCascadeNavigationControllerDelegate <NSObject>
//- (void) rootViewControllerMoveToMasterPosition;
//- (void) rootViewControllerMoveToDetailPosition;
//@end
