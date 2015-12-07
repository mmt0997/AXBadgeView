//
//  AXBadgeView.h
//  AXBadgeView
//
//  Created by ai on 15/12/7.
//  Copyright © 2015年 AiXing. All rights reserved.
//

#import <UIKit/UIKit.h>
/// AXBadge style.
typedef NS_ENUM(NSUInteger, AXBadgeViewStyle) {
    /// Normal shows a red dot.
    AXBadgeViewNormal,
    /// Number shows a number form text.
    AXBadgeViewNumber,
    /// Text shows a custom text.
    AXBadgeViewText,
    /// New shows a new text.
    AXBadgeViewNew
};
///
/// AXBadgeView
///
@interface AXBadgeView : UILabel
/// Attached view.
@property(weak, nonatomic) UIView *attachedView;
/// Style of badge view. Defaults to AXBadgeViewNormal.
@property(assign, nonatomic) AXBadgeViewStyle style UI_APPEARANCE_SELECTOR;
/// Offsets, Defaults to (CGFLOAT_MAX, CGFLOAT_MIN).
@property(assign, nonatomic) CGPoint offsets UI_APPEARANCE_SELECTOR;
/// Hide on zero content. Defaults to YES
@property(assign, nonatomic) BOOL hideOnZero;
/// Min size. Defaults to {12.0, 12.0}.
@property(assign, nonatomic) CGSize minSize UI_APPEARANCE_SELECTOR;
/// Show badge view with animation.
///
/// @param animated show badge with or without animation.
- (void)showAnimated:(BOOL)animated;
/// Hide badge view.
///
/// @param animated hide badge with or without animation.
- (void)hideAnimated:(BOOL)animated;
/// Show badge view from a attched view.
///
/// @param view a attached view.
/// @param animated show badge with or without animation.
- (void)showInView:(UIView *)view animated:(BOOL)animated;
@end