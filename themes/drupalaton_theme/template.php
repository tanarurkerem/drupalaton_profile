<?php 

function live_oneday(){  
  $html = '
  <div id="live" class="oneday">
    <div class="inner">
      <a href="/broadcast/workshop">
        <div class="icon"></div>
        <div class="text">
            <div class="day">
              FRIDAY
            </div>
            <div class="dayname">
              WORKSHOP DAY
            </div>
        </div>  
      </a>
    </div>  
  </div>';
  return $html;
}

function live_twoday(){  
  $html = '<div id="live" class="twoday">
    <div class="inner">
      <a href="/broadcast/session-a">
        <div class="icon"></div>
        <div class="text">
          <div class="day">
            SATURDAY
          </div>
          <div class="dayname">
            SESSIONS A
          </div>
        </div>  
      </a>
      <a href="/broadcast/session-b">
        <div class="icon"></div>
        <div class="text">
          <div class="day">
            SATURDAY
          </div>
          <div class="dayname">
            SESSIONS B
          </div>
        </div>  
      </a>
    </div>  
  </div>';	
  return $html;
}