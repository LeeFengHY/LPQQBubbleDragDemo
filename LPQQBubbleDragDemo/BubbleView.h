//
//  BubbleView.h
//  LPQQBubbleDragDemo
//
//  Created by QFWangLP on 15/11/23.
//  Copyright © 2015年 QFWang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BubbleView : UIView

/**
 *  父视图
 */
@property (nonatomic, strong) UIView *containerView;

/**
 *  气泡上显示数字的label
 */
@property (nonatomic, strong) UILabel *bubbleLabel;

/**
 *  气泡的直径
 */
@property (nonatomic, assign) CGFloat bubbleWidth;

/**
 *  气泡粘性系数, 越大可以拉得越长
 */
@property (nonatomic, assign) CGFloat viscosity;

/**
 *  气泡颜色
 */
@property (nonatomic, strong) UIColor *bubbleColor;

/**
 *  需要隐藏气泡时候可以使用self.frontView.hidden = YES;--移动的气泡view
 */
@property (nonatomic, strong) UIView *frontView;


/**
 *  实例化一个气泡对象
 *
 *  @param point 其实坐标
 *  @param view
 *
 *  @return
 */
- (id)initWithPoint:(CGPoint)point superView:(UIView *)view;

/**
 *  初始化UI
 */
- (void)initializerUI;

@end
