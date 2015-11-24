//
//  ViewController.m
//  LPQQBubbleDragDemo
//
//  Created by QFWangLP on 15/11/23.
//  Copyright © 2015年 QFWang. All rights reserved.
//

#import "ViewController.h"
#import "BubbleView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    BubbleView *bubbleView = [[BubbleView alloc] initWithPoint:CGPointMake(25, [UIScreen mainScreen].bounds.size.height - 64) superView:self.view];
    bubbleView.bubbleColor = [UIColor colorWithRed:0 green:0.722 blue:1 alpha:1];
    bubbleView.viscosity = 20;
    bubbleView.bubbleWidth = 36;
    [bubbleView initializerUI];
    //注意：设置 'bubbleLabel.text' 一定要放在 '-setUp' 方法之后
    bubbleView.bubbleLabel.text = @"99";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
