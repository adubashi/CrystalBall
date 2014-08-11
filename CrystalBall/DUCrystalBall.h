//
//  DUCrystalBall.h
//  CrystalBall
//
//  Created by Deepa Arora on 5/12/14.
//  Copyright (c) 2014 Dubashi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DUCrystalBall : NSObject{
    
    NSArray *_predictions;
}






@property (strong, nonatomic,readonly) NSArray *predictions;


- (NSString *) randomPrediction;


@end
