//
//  DUViewController.h
//  CrystalBall
//
//  Created by Deepa Arora on 1/3/14.
//  Copyright (c) 2014 Dubashi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DUCrystalBall;

@interface DUViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong,nonatomic) DUCrystalBall *crystalBall;

-(void) makePrediction;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImage;





@end
